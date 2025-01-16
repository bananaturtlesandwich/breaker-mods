#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemySpawnRegionState.h"
#include "TaggedEnemySpawnRegionStateMap.generated.h"

USTRUCT(BlueprintType)
struct FTaggedEnemySpawnRegionStateMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FEnemySpawnRegionState> StatesByTag;
    
    BREAKER_API FTaggedEnemySpawnRegionStateMap();
};

