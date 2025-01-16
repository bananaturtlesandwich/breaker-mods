#include "StageReadyListenerComponent.h"

UStageReadyListenerComponent::UStageReadyListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStageReadyListenerComponent::OnStageUnready_Implementation() {
}

void UStageReadyListenerComponent::OnStageReady_Implementation() {
}

bool UStageReadyListenerComponent::IsStageReady() const {
    return false;
}


