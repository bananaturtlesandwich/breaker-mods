#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GearHolobyteLevelUpgrades.h"
#include "GearHolobyteUpgrades.generated.h"

USTRUCT(BlueprintType)
struct FGearHolobyteUpgrades : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGearHolobyteLevelUpgrades> LevelInfo;
    
    BREAKER_API FGearHolobyteUpgrades();
};

