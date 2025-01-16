#include "NavToTargetFilter.h"

UNavToTargetFilter::UNavToTargetFilter() {
}

USceneComponent* UNavToTargetFilter::GetTargetSceneComponent_Implementation(UNavToTargetMovementComponent* Component, AActor* Target) {
    return NULL;
}

bool UNavToTargetFilter::CanAcceptTarget_Implementation(UNavToTargetMovementComponent* Component, AActor* Target) {
    return false;
}


