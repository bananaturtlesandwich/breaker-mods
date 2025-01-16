#pragma once
#include "CoreMinimal.h"
#include "EWeaponStanceType.generated.h"

UENUM(BlueprintType)
enum class EWeaponStanceType : uint8 {
    Amp_Grenade,
    Compact_Standard,
    Compact_Rapid,
    Compact_Blast,
    Hitscan_Beam,
    Hitscan_Range,
    Hitscan_Thick,
    Launcher_Missile,
    Launcher_Burst,
    Launcher_Bow,
    Scatter_Double,
    Scatter_Diamond,
    Scatter_Spread,
};

