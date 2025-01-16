#include "MovementRagdoll.h"

UMovementRagdoll::UMovementRagdoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DragSeconds = 2.00f;
    this->MinSeconds = 1.00f;
    this->MaxSeconds = 2.00f;
    this->ExitSpeed = 50.00f;
    this->SlopeAlignment = 0.90f;
    this->MinAnimTime = 1.00f;
    this->MaxTimeAfterAnimExit = 0.33f;
    this->AnimHeavyKnockback = NULL;
    this->AnimOutSectionName = TEXT("Out");
}

ABreakerPawn* UMovementRagdoll::GetCharacterPawn() const {
    return NULL;
}


