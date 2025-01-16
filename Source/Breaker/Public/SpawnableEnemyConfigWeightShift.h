#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpawnableEnemyConfigWeightShift.generated.h"

USTRUCT(BlueprintType)
struct FSpawnableEnemyConfigWeightShift {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EnemyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShiftAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepeatable;
    
    BREAKER_API FSpawnableEnemyConfigWeightShift();
};

