#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpawnableEnemyConfigLimit.generated.h"

USTRUCT(BlueprintType)
struct FSpawnableEnemyConfigLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EnemyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumAmount;
    
    BREAKER_API FSpawnableEnemyConfigLimit();
};

