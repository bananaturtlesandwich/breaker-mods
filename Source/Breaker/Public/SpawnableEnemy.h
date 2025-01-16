#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnableEnemy.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FSpawnableEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACMCharBase> EnemyType;
    
    BREAKER_API FSpawnableEnemy();
};

