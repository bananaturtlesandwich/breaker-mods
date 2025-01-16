#pragma once
#include "CoreMinimal.h"
#include "EShopType.generated.h"

UENUM(BlueprintType)
enum class EShopType : uint8 {
    None,
    Blade,
    Health,
    Amp,
    Rails,
    Sycom,
    Holobyte,
};

