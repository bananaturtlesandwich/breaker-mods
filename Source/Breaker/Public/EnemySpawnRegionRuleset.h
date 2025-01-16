#pragma once
#include "CoreMinimal.h"
#include "SpawnableEnemyLimits.h"
#include "SpawnableEnemyUpgrade.h"
#include "SpawnableEnemyWeightShifts.h"
#include "EnemySpawnRegionRuleset.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnRegionRuleset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnableEnemyLimits SpawnLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnableEnemyWeightShifts SpawnWeightShifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnableEnemyUpgrade> PotentialUpgrades;
    
    BREAKER_API FEnemySpawnRegionRuleset();
};

