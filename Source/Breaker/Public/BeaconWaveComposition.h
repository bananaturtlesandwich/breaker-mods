#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemySpawnCompositionSlot.h"
#include "BeaconWaveComposition.generated.h"

USTRUCT(BlueprintType)
struct FBeaconWaveComposition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemySpawnCompositionSlot> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomizeEnemyPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Wave1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Wave2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Wave3;
    
    BREAKER_API FBeaconWaveComposition();
};

