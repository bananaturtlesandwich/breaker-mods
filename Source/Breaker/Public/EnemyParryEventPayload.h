#pragma once
#include "CoreMinimal.h"
#include "EAttackChannel.h"
#include "ParryEventPayload.h"
#include "EnemyParryEventPayload.generated.h"

USTRUCT(BlueprintType)
struct FEnemyParryEventPayload : public FParryEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackChannel ParriedAttackChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParriedAttackName;
    
    BREAKER_API FEnemyParryEventPayload();
};

