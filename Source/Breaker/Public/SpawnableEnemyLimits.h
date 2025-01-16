#pragma once
#include "CoreMinimal.h"
#include "SpawnableEnemyConfigLimit.h"
#include "SpawnableEnemyTypeLimit.h"
#include "SpawnableEnemyLimits.generated.h"

USTRUCT(BlueprintType)
struct FSpawnableEnemyLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnableEnemyTypeLimit> EnemyTypeLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnableEnemyConfigLimit> EnemyConfigLimits;
    
    BREAKER_API FSpawnableEnemyLimits();
};

