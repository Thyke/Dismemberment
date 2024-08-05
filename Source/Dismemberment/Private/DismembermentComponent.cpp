// Copyright (C) Thyke. All Rights Reserved.

#include "DismembermentComponent.h"
#include "LimbActor.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"


UDismembermentComponent::UDismembermentComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    LoadedLimbData = nullptr;
}

void UDismembermentComponent::BeginPlay()
{
    Super::BeginPlay();

    if (LimbDataAsset.IsValid())
    {
        OnLimbDataLoaded();
    }
    else if (LimbDataAsset.ToSoftObjectPath().IsValid())
    {
        FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
        Streamable.RequestAsyncLoad(LimbDataAsset.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UDismembermentComponent::OnLimbDataLoaded));
    }
}

void UDismembermentComponent::OnLimbDataLoaded()
{
    LoadedLimbData = LimbDataAsset.Get();
}

void UDismembermentComponent::Dismember(FName BoneName, bool DropAllWeaponsFlag)
{
    if (!LoadedLimbData)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: LimbData not loaded"));
        return;
    }

    ACharacter* Owner = Cast<ACharacter>(GetOwner());
    if (!Owner)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: Owner is not a Character"));
        return;
    }

    USkeletalMeshComponent* MainSkeletalMesh = Owner->GetMesh();
    if (!MainSkeletalMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: No SkeletalMeshComponent found on owner"));
        return;
    }

    bool dismembermentPerformed = false;

    for (const auto& BodyPart : LoadedLimbData->BodyParts)
    {
        const FBodyPartData& BodyPartData = BodyPart.Value;
        if (BodyPartData.AssociatedBones.Contains(BoneName))
        {
            OnPreDismemberment.Broadcast(BoneName);
            SpawnLimbActor(BodyPartData.LimbData, BoneName);
            HideBoneAndHierarchy(MainSkeletalMesh, BodyPartData.AssociatedBones);
            dismembermentPerformed = true;
            OnPostDismemberment.Broadcast(BoneName);
            break;
        }
    }

    if (!dismembermentPerformed)
    {
        for (const auto& SeverableBone : LoadedLimbData->SeverableBones)
        {
            if (SeverableBone.Bones.Contains(BoneName))
            {
                OnPreDismemberment.Broadcast(BoneName);
                SpawnLimbActor(SeverableBone.UpperTorsoPart, BoneName);
                SpawnLimbActor(SeverableBone.LowerTorsoPart, BoneName);
                HideBoneAndHierarchy(MainSkeletalMesh, SeverableBone.Bones);
                dismembermentPerformed = true;
                OnPostDismemberment.Broadcast(BoneName);
                break;
            }
        }
    }

    if (dismembermentPerformed)
    {
        if (DropAllWeaponsFlag)
        {
            DropAllWeapons();
        }
        else
        {
            DropWeapon(BoneName);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("DismembermentComponent: No matching body part found for bone %s"), *BoneName.ToString());
    }
}

void UDismembermentComponent::HideBoneAndHierarchy(USkeletalMeshComponent* SkeletalMesh, const TArray<FName>& Bones)
{
    if (!SkeletalMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: Invalid SkeletalMesh in HideBoneAndHierarchy"));
        return;
    }

    for (const FName& BoneName : Bones)
    {
        int32 BoneIndex = SkeletalMesh->GetBoneIndex(BoneName);
        if (BoneIndex != INDEX_NONE)
        {
            SkeletalMesh->HideBoneByName(BoneName, PBO_None);
            UE_LOG(LogTemp, Verbose, TEXT("DismembermentComponent: Hiding bone %s"), *BoneName.ToString());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("DismembermentComponent: Bone %s not found in SkeletalMesh"), *BoneName.ToString());
        }
    }
}

void UDismembermentComponent::SpawnLimbActor(const FDismembermentLimbData& LimbData, FName BoneName)
{
    if (!LimbData.LimbMesh)
    {
        UE_LOG(LogTemp, Warning, TEXT("DismembermentComponent: No LimbMesh set for bone %s"), *BoneName.ToString());
        return;
    }

    ACharacter* Owner = Cast<ACharacter>(GetOwner());
    if (!Owner)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: Owner is not a Character"));
        return;
    }

    USkeletalMeshComponent* SkeletalMesh = Owner->GetMesh();
    if (!SkeletalMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: No SkeletalMeshComponent found on owner"));
        return;
    }

    FVector SpawnLocation = SkeletalMesh->GetBoneLocation(FName("root"));
    FRotator SpawnRotation = SkeletalMesh->GetBoneQuaternion(FName("root")).Rotator();

    ALimbActor* SpawnedActor = GetWorld()->SpawnActor<ALimbActor>(ALimbActor::StaticClass(), SpawnLocation, SpawnRotation);
    if (SpawnedActor)
    {
        SpawnedActor->Initialize(LimbData.LimbMesh, LimbData.DisablePhysicsDelay);
    }
}

void UDismembermentComponent::HandleAttachedComponents(const TArray<FName>& Bones)
{
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        UE_LOG(LogTemp, Error, TEXT("DismembermentComponent: Invalid Owner in HandleAttachedComponents"));
        return;
    }

    TArray<USceneComponent*> AttachedComponents;
    Owner->GetComponents<USceneComponent>(AttachedComponents);

    for (USceneComponent* Component : AttachedComponents)
    {
        if (Component->ComponentHasTag(WeaponTag))
        {
            for (const FName& BoneName : Bones)
            {
                if (Component->GetAttachSocketName() == BoneName)
                {
                    DropWeapon(BoneName);
                    break;
                }
            }
        }
    }
}

void UDismembermentComponent::DropWeapon(FName BoneName)
{
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    TArray<USceneComponent*> AttachedComponents;
    Owner->GetComponents<USceneComponent>(AttachedComponents);

    for (USceneComponent* Component : AttachedComponents)
    {
        if (Component->ComponentHasTag(WeaponTag) && Component->GetAttachSocketName() == BoneName)
        {
            Component->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

            if (UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Component))
            {
                PrimComp->SetSimulatePhysics(true);
                PrimComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            }

            UE_LOG(LogTemp, Log, TEXT("DismembermentComponent: Dropped weapon attached to bone %s"), *BoneName.ToString());
            break;
        }
    }
}

void UDismembermentComponent::DropAllWeapons()
{
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    TArray<USceneComponent*> AttachedComponents;
    Owner->GetComponents<USceneComponent>(AttachedComponents);

    for (USceneComponent* Component : AttachedComponents)
    {
        if (Component->ComponentHasTag(WeaponTag))
        {
            Component->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

            if (UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Component))
            {
                PrimComp->SetSimulatePhysics(true);
                PrimComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            }

            UE_LOG(LogTemp, Log, TEXT("DismembermentComponent: Dropped weapon %s"), *Component->GetName());
        }
    }
}