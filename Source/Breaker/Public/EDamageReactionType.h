#pragma once
#include "CoreMinimal.h"
#include "EDamageReactionType.generated.h"

UENUM(BlueprintType)
enum class EDamageReactionType : uint8 {
    None,
    FullRange,
    FlinchOnly,
};

