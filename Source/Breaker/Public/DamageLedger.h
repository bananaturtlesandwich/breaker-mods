#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "DamageLedger.generated.h"

USTRUCT(BlueprintType)
struct FDamageLedger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage OriginalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage FinalDamage;
    
    BREAKER_API FDamageLedger();
};

