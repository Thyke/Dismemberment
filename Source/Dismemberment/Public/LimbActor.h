// Copyright (C) Thyke. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LimbActor.generated.h"

UCLASS()
class DISMEMBERMENT_API ALimbActor : public AActor
{
	GENERATED_BODY()
	
public:
    ALimbActor();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* StaticMeshComp;

    void Initialize(UStaticMesh* LimbMesh, float DisablePhysicsDelay);

private:
    void DisablePhysics();
    FTimerHandle PhysicsDisableTimerHandle;
    float PhysicsDisableDelay;
};
