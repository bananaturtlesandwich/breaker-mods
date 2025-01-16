#pragma once
#include "CoreMinimal.h"
#include "ECharacterEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class ECharacterEquipmentSlot : uint8 {
    None,
    PrimaryBlade,
    Rail,
    Amp,
    Kit,
    Dash,
    Hoverboard,
    CustomActionA,
    CustomActionB,
    Holobyte1,
    Holobyte2,
    Holobyte3,
    Holobyte4,
    Holobyte5,
    Armor,
    Accessory,
    MAX,
};

