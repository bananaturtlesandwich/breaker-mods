#pragma once
#include "CoreMinimal.h"
#include "EAIAbilityRestriction.generated.h"

UENUM(BlueprintType)
enum class EAIAbilityRestriction : uint8 {
    ZeroBitMarker,
    RequiresMeleeCleanShotPreAttack,
    RequiresRangedCleanShotPreAttack,
    RequiresNonPartialPathPreAttack = 4,
    RequiresVerticalityCheck = 8,
    RequiresNavigationMetaData = 16,
};

