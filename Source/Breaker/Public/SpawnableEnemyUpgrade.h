#pragma once
#include "CoreMinimal.h"
#include "SpawnableEnemyUpgrade.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FSpawnableEnemyUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACMCharBase> EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACMCharBase> UpgradesTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstPossibleDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastPossibleDay;
    
    BREAKER_API FSpawnableEnemyUpgrade();
};

