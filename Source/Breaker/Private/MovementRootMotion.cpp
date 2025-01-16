#include "MovementRootMotion.h"

UMovementRootMotion::UMovementRootMotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSlideDuration = 0.85f;
    this->InAnim = NULL;
    this->CurrAnim = NULL;
}

bool UMovementRootMotion::TryPlay(UAnimMontage* Anim, FRootMotionPlaySettings Settings) {
    return false;
}

void UMovementRootMotion::SetDynamicRootMotionScale(float NewScale) {
}

void UMovementRootMotion::HaltRootMotion_Server_Implementation(FVector AtLocation, int32 MovementFingerprint) {
}

void UMovementRootMotion::HaltRootMotion_Multicast_Implementation(FVector AtLocation, int32 MovementFingerprint) {
}

ABreakerPawn* UMovementRootMotion::GetCharacterPawn() const {
    return NULL;
}


