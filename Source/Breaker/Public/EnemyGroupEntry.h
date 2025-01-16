#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupEntry.generated.h"

USTRUCT(BlueprintType)
struct FEnemyGroupEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    BREAKER_API FEnemyGroupEntry();
};

