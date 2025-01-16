#pragma once
#include "CoreMinimal.h"
#include "SpawnableEnemyConfigWeightShift.h"
#include "SpawnableEnemyTypeWeightShift.h"
#include "SpawnableEnemyWeightShifts.generated.h"

USTRUCT(BlueprintType)
struct FSpawnableEnemyWeightShifts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnableEnemyTypeWeightShift> EnemyTypeWeightShifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnableEnemyConfigWeightShift> EnemyConfigWeightShifts;
    
    BREAKER_API FSpawnableEnemyWeightShifts();
};

