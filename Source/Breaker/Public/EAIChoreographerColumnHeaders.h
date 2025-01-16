#pragma once
#include "CoreMinimal.h"
#include "EAIChoreographerColumnHeaders.generated.h"

UENUM(BlueprintType)
enum class EAIChoreographerColumnHeaders : uint8 {
    AI_ActorName,
    AI_IndividualActions,
    AI_BehaviorAction,
    AI_BehaviorTree,
    AI_BehaviorTreeNode,
    AI_ActiveAttackChannel,
    AI_AttackPriority,
    AI_PathingAction,
    AI_PathingStatus,
    AI_Location,
    AI_ChoreographerLocation,
    AI_CombatTarget,
    AI_FocusTarget,
    AI_MovementState,
    AI_CurrentMaxSpeed,
    AI_AnimationCurrentMontage,
    AI_AudioPriority,
};

