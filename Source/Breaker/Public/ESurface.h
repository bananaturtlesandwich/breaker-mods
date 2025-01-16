#pragma once
#include "CoreMinimal.h"
#include "ESurface.generated.h"

UENUM(BlueprintType)
namespace ESurface {
    enum Type {
        None,
        Sand,
        Dirt,
        Grass,
        Rock,
        Metal,
        Terrain,
        Wood,
        Snow,
        Ice,
        Concrete,
        Water,
    };
}

