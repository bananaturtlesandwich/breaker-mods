#pragma once
#include "CoreMinimal.h"
#include "EGlobalEvent_AbyssKingState.generated.h"

UENUM(BlueprintType)
enum class EGlobalEvent_AbyssKingState : uint8 {
    AbyssKingState_Inactive,
    AbyssKingState_Prepare,
    AbyssKingState_Emerge,
    AbyssKingState_InPosition,
    AbyssKingState_SpawnMeteors,
    AbyssKingState_FireMeteors,
    AbyssKingState_Return,
    AbyssKingState_Done,
};

