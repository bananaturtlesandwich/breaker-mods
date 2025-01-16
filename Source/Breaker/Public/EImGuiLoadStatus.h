#pragma once
#include "CoreMinimal.h"
#include "EImGuiLoadStatus.generated.h"

UENUM(BlueprintType)
enum class EImGuiLoadStatus : uint8 {
    LoadStatus_NotLoaded,
    LoadStatus_LoadingFailed,
    LoadStatus_Loaded,
    LoadStatus_LoadedButNotSupported,
};

