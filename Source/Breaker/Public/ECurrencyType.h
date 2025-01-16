#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.generated.h"

UENUM(BlueprintType)
enum class ECurrencyType : uint8 {
    None,
    BrightBlood,
    Material,
    BlueOre,
    PurpleOre,
    GoldOre,
    Key,
    RemoteKey,
    GoldenRations,
    AbyssStone,
    NarrativeCurrency_Minor,
    NarrativeCurrency_Major,
    AbilityPoint,
    Material_InRun,
    RunToken,
    Core,
    CoreShard,
    MediGem,
    Ingredient,
    Diode,
    Cartridge,
    Count,
};

