// Copyright (C) Thyke. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LimbData.h"
#include "Components/ActorComponent.h"
#include "DismembermentComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDismembermentDelegate, FName, BrokenBone);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DISMEMBERMENT_API UDismembermentComponent : public UActorComponent
{
	GENERATED_BODY()

public:
    UDismembermentComponent();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    TSoftObjectPtr<ULimbData> LimbDataAsset;

    UPROPERTY(BlueprintAssignable, Category = "Dismemberment")
    FOnDismembermentDelegate OnPreDismemberment;

    UPROPERTY(BlueprintAssignable, Category = "Dismemberment")
    FOnDismembermentDelegate OnPostDismemberment;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    FName WeaponTag;

    UFUNCTION(BlueprintCallable, Category = "Dismemberment")
    //void Dismember(FName BoneName, FVector SpawnLocation = FVector::ZeroVector, FRotator SpawnRotation = FRotator::ZeroRotator, bool UseBoneLocation = true);
    void Dismember(FName BoneName, bool DropAllWeaponsFlag = true);
private:
    void HideBoneAndHierarchy(USkeletalMeshComponent* SkeletalMesh, const TArray<FName>& Bones);
    void OnLimbDataLoaded();
    //void SpawnLimbActor(const FDismembermentLimbData& LimbData, FName BoneName, FVector SpawnLocation, FRotator SpawnRotation, bool UseBoneLocation);
    void SpawnLimbActor(const FDismembermentLimbData& LimbData, FName BoneName);
    void HandleAttachedComponents(const TArray<FName>& Bones);
    void DropWeapon(FName BoneName);
    void DropAllWeapons();
    ULimbData* LoadedLimbData;
};
