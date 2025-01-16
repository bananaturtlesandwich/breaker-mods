#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EnemySpawnCompositionSlot.h"
#include "EnemySpawnPreference.h"
#include "EliteBossUnlockEnemyComposition.generated.h"

USTRUCT(BlueprintType)
struct FEliteBossUnlockEnemyComposition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPreference EliteEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemySpawnCompositionSlot> SupportEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Biomes;
    
    BREAKER_API FEliteBossUnlockEnemyComposition();
};

