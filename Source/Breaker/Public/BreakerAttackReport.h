#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "BreakerAttackReport.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBreakerAttackReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage Damage;
    
    BREAKER_API FBreakerAttackReport();
};

