#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnableEnemyTypeLimit.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FSpawnableEnemyTypeLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACMCharBase> EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACMCharBase> ResolvedEnemyType;
    
public:
    BREAKER_API FSpawnableEnemyTypeLimit();
};

