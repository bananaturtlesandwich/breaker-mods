#pragma once
#include "CoreMinimal.h"
#include "GlobalEvent_AbyssKing_Meteor_State.generated.h"

UENUM(BlueprintType)
enum class GlobalEvent_AbyssKing_Meteor_State : uint8 {
    AbyssKing_Meteor_State_None,
    AbyssKing_Meteor_State_Grow,
    AbyssKing_Meteor_State_Hover,
    AbyssKing_Meteor_State_Travel,
    AbyssKing_Meteor_State_Explode,
    AbyssKing_Meteor_State_AOE,
};

