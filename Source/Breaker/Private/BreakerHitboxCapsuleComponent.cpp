#include "BreakerHitboxCapsuleComponent.h"

UBreakerHitboxCapsuleComponent::UBreakerHitboxCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DefaultStatus = EBreakerHitboxStatus::Normal;
}


