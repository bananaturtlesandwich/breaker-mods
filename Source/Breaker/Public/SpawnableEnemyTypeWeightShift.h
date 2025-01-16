#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnableEnemyTypeWeightShift.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FSpawnableEnemyTypeWeightShift {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACMCharBase> EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShiftAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepeatable;
    
    BREAKER_API FSpawnableEnemyTypeWeightShift();
};

