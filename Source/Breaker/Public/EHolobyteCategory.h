#pragma once
#include "CoreMinimal.h"
#include "EHolobyteCategory.generated.h"

UENUM(BlueprintType)
enum class EHolobyteCategory : uint8 {
    DEFAULT,
    Active,
    Passive,
    Affix,
    SyComTrait,
    WeaponTrait,
    WeaponStatusEffect,
    Ability,
    Armor,
    VendorReward,
    Accessory,
};

