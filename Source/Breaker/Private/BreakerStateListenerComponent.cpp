#include "BreakerStateListenerComponent.h"

UBreakerStateListenerComponent::UBreakerStateListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsServerOnly = false;
    this->StateMachine = NULL;
}

float UBreakerStateListenerComponent::UntilDeadline() const {
    return 0.0f;
}

bool UBreakerStateListenerComponent::TryEnterWithDeadline(float TimeoutDuration) {
    return false;
}

bool UBreakerStateListenerComponent::TryEnter() {
    return false;
}

bool UBreakerStateListenerComponent::IsCurrent() const {
    return false;
}

bool UBreakerStateListenerComponent::HasDeadline() const {
    return false;
}


