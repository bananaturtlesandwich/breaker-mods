#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemySpawnPreference.h"
#include "EnemySpawnCompositionSlot.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnCompositionSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPreference EnemyPreference;
    
    BREAKER_API FEnemySpawnCompositionSlot();
};

