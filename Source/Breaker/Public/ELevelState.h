#pragma once
#include "CoreMinimal.h"
#include "ELevelState.generated.h"

UENUM(BlueprintType)
enum class ELevelState : uint8 {
    Uninitialized,
    Hub,
    Apartment,
    Bar,
    Blade,
    Health,
    Rails,
    Amp,
    Sycom,
    Tailor,
    Pangaea,
    S01Boss,
    S02Boss,
    S03Boss,
    S04Boss,
    S05Boss,
    Abyss,
    Training,
};

