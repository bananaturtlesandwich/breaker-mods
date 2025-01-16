#pragma once
#include "CoreMinimal.h"
#include "ActionCooldownSettings.generated.h"

USTRUCT(BlueprintType)
struct FActionCooldownSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaselineCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitLandedDurationModifier;
    
    BREAKER_API FActionCooldownSettings();
};

