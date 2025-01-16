#pragma once
#include "CoreMinimal.h"
#include "ECommonTextureType.generated.h"

UENUM(BlueprintType)
enum class ECommonTextureType : uint8 {
    CommonTextureTypeBiomeMask,
    CommonTextureTypeControlMap,
    CommonTextureTypeNormal,
    CommonTextureTypePathMap,
    CommonTextureTypeWaterMap,
};

