#pragma once
#include "CoreMinimal.h"
#include "EHolobyteType.generated.h"

UENUM(BlueprintType)
enum class EHolobyteType : uint8 {
    NONE,
    General,
    Allies,
    AllATK,
    Blade,
    Rail,
    Amp,
    Kit,
    Dash,
    HoverGlide,
    BuffEffect,
    Skill,
    Accessory,
    Parry,
    Flashstep,
    DangerMeter,
    DropsLoadout,
    Currency,
    Death,
};

