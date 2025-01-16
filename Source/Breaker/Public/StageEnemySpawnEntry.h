#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StageEnemySpawnEntry.generated.h"

USTRUCT(BlueprintType)
struct FStageEnemySpawnEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArchetypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    BREAKER_API FStageEnemySpawnEntry();
};

