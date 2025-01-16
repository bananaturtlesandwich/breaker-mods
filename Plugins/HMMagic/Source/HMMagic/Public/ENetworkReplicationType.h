#pragma once
#include "CoreMinimal.h"
#include "ENetworkReplicationType.generated.h"

UENUM(BlueprintType)
enum class ENetworkReplicationType : uint8 {
    Unreliable,
    Reliable,
    None = 254,
};

