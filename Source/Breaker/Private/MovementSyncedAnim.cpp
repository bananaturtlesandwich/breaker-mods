#include "MovementSyncedAnim.h"

UMovementSyncedAnim::UMovementSyncedAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundQueryDistance = 0.00f;
    this->InAnim = NULL;
    this->CurrAnim = NULL;
}

bool UMovementSyncedAnim::TryPlay(UAnimMontage* Anim, FName SectionName, EBreakerSyncedAnimType SyncedAnimType, const FTransform& SyncTransform, float CrossFade, EMovementModeTransitionTag Tag) {
    return false;
}

ABreakerPawn* UMovementSyncedAnim::GetCharacterPawn() const {
    return NULL;
}


