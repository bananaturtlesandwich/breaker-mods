#pragma once
#include "CoreMinimal.h"
#include "ENetworkReplicationAuthority.generated.h"

UENUM(BlueprintType)
enum class ENetworkReplicationAuthority : uint8 {
    Server,
    Client,
    ClientOnly,
    OwnerOnly,
};

