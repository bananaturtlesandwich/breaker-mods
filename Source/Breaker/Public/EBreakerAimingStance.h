#pragma once
#include "CoreMinimal.h"
#include "EBreakerAimingStance.generated.h"

UENUM(BlueprintType)
enum class EBreakerAimingStance : uint8 {
    None,
    Compact_Standard,
    Compact_Rapid,
    Compact_Blast,
    Scatter_Double,
    Scatter_Diamond,
    Scatter_Spread,
    Launcher_Missile,
    Launcher_Burst,
    Launcher_Bow,
    Line_Beam,
    Line_Range,
    Line_Thick,
    Amp_Grenade,
    Amp_Gauntlet,
};

