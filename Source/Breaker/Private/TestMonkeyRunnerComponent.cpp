#include "TestMonkeyRunnerComponent.h"

UTestMonkeyRunnerComponent::UTestMonkeyRunnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bIsRunning = false;
}

void UTestMonkeyRunnerComponent::StartSession_Implementation() {
}

void UTestMonkeyRunnerComponent::EndSession_Implementation() {
}


