#pragma once
#include "CoreMinimal.h"
#include "BiomeZoneInfo.h"
#include "EnemySpawnPreference.h"
#include "SpawnEnemyParameters.generated.h"

USTRUCT(BlueprintType)
struct FSpawnEnemyParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_DifficultyLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BiomeZoneInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EnemyPreference: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomeZoneInfo BiomeZoneInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPreference EnemyPreference;
    
    BREAKER_API FSpawnEnemyParameters();
};

