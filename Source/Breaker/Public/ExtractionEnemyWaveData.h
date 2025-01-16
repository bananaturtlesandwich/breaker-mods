#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnComposition.h"
#include "ExtractionEnemyWaveData.generated.h"

USTRUCT(BlueprintType)
struct FExtractionEnemyWaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemySpawnComposition> EnemyCompositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeForWaveSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WavePointsNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayersRequired;
    
    BREAKER_API FExtractionEnemyWaveData();
};

