#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnCalendarEntry.h"
#include "EnemySpawnCalendar.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnCalendar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemySpawnCalendarEntry> EnemySpawnEntries;
    
    BREAKER_API FEnemySpawnCalendar();
};

