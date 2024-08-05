// Copyright (C) Thyke. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/StaticMesh.h"
#include "LimbData.generated.h"


UENUM(BlueprintType)
enum class EBodyPart : uint8
{
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
    Head,
    UpperTorso,
    LowerTorso
};

USTRUCT(BlueprintType)
struct FDismembermentLimbData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dismemberment")
    TObjectPtr<UStaticMesh> LimbMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dismemberment")
    float DisablePhysicsDelay = 5.0f; // Default to 5 seconds
};

USTRUCT(BlueprintType)
struct FBodyPartData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dismemberment")
    TArray<FName> AssociatedBones;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dismemberment")
    FDismembermentLimbData LimbData;
};

USTRUCT(BlueprintType)
struct FSeverableBone
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    TArray<FName> Bones;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    FDismembermentLimbData UpperTorsoPart;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    FDismembermentLimbData LowerTorsoPart;
};


UCLASS()
class DISMEMBERMENT_API ULimbData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    ULimbData()
    {
        // Initialize default bone data for body parts
        FBodyPartData LeftArmData;
        LeftArmData.AssociatedBones = { FName("clavicle_l"), FName("upperarm_l"), FName("lowerarm_l"), FName("hand_l") };

        FBodyPartData RightArmData;
        RightArmData.AssociatedBones = { FName("clavicle_r"), FName("upperarm_r"), FName("lowerarm_r"), FName("hand_r") };

        FBodyPartData LeftLegData;
        LeftLegData.AssociatedBones = { FName("thigh_l"), FName("calf_l"), FName("foot_l") };

        FBodyPartData RightLegData;
        RightLegData.AssociatedBones = { FName("thigh_r"), FName("calf_r"), FName("foot_r") };

        FBodyPartData HeadData;
        HeadData.AssociatedBones = { FName("neck_01"), FName("neck_02"), FName("head") };

        BodyParts.Add(EBodyPart::LeftArm, LeftArmData);
        BodyParts.Add(EBodyPart::RightArm, RightArmData);
        BodyParts.Add(EBodyPart::LeftLeg, LeftLegData);
        BodyParts.Add(EBodyPart::RightLeg, RightLegData);
        BodyParts.Add(EBodyPart::Head, HeadData);

        FSeverableBone SeveralBones;
        SeveralBones.Bones = { FName("pelvis"), FName("spine_01"), FName("spine_02"), FName("spine_03"), FName("spine_04"), FName("spine_05") };

        SeverableBones.Add(SeveralBones);
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    TMap<EBodyPart, FBodyPartData> BodyParts;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    TArray<FSeverableBone> SeverableBones;
};
