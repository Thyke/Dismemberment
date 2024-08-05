// Copyright (C) Thyke. All Rights Reserved.

#include "LimbActor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

ALimbActor::ALimbActor()
{
    PrimaryActorTick.bCanEverTick = false;

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
    RootComponent = StaticMeshComp;

    StaticMeshComp->SetGenerateOverlapEvents(false);
    StaticMeshComp->SetNotifyRigidBodyCollision(false);
    StaticMeshComp->SetComponentTickEnabled(false);
}

void ALimbActor::BeginPlay()
{
    Super::BeginPlay();
}

void ALimbActor::Initialize(UStaticMesh* LimbMesh, float DisablePhysicsDelay)
{
    if (StaticMeshComp)
    {
        StaticMeshComp->SetStaticMesh(LimbMesh);
        StaticMeshComp->SetSimulatePhysics(true);

        // Ignore all except WorldStatic, WorldDynamic, and Destructible
        StaticMeshComp->SetCollisionObjectType(ECC_PhysicsBody);
        StaticMeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
        StaticMeshComp->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
        StaticMeshComp->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
        StaticMeshComp->SetCollisionResponseToChannel(ECC_Destructible, ECR_Block);
        StaticMeshComp->SetCollisionResponseToChannel(ECC_PhysicsBody, ECR_Block);
    }

    PhysicsDisableDelay = DisablePhysicsDelay;
    GetWorld()->GetTimerManager().SetTimer(PhysicsDisableTimerHandle, this, &ALimbActor::DisablePhysics, PhysicsDisableDelay, false);
}

void ALimbActor::DisablePhysics()
{
    if (StaticMeshComp)
    {
        StaticMeshComp->SetSimulatePhysics(false);
    }
}