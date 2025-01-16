#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnRegionRuleset.h"
#include "Templates/SubclassOf.h"
#include "EnemySpawnRegionState.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FEnemySpawnRegionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnRegionRuleset SpawnRuleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ACMCharBase>, int32> TypeSpawnCounts;
    
public:
    BREAKER_API FEnemySpawnRegionState();
};

