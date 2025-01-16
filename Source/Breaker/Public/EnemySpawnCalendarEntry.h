#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnCalendarEntry.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FEnemySpawnCalendarEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACMCharBase> EnemyType;
    
    BREAKER_API FEnemySpawnCalendarEntry();
};

