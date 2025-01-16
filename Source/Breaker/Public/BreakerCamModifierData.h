#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "BreakerCamModifierData.generated.h"

USTRUCT(BlueprintType)
struct FBreakerCamModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage DamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForKill;
    
    BREAKER_API FBreakerCamModifierData();
};

