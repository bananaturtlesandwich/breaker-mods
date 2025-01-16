#pragma once
#include "CoreMinimal.h"
#include "AICombatAbilityRestriction.generated.h"

USTRUCT(BlueprintType)
struct FAICombatAbilityRestriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AbilityRestrictionFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleanShotMaxAngleDeviationDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CleanShotMaxAngleCosDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalityDifferenceCm;
    
    BREAKER_API FAICombatAbilityRestriction();
};

