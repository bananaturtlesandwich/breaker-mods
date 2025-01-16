#include "BreakerPlayerAIComponent.h"

UBreakerPlayerAIComponent::UBreakerPlayerAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageModifier = 1.00f;
    this->bIsWanderer = false;
}

void UBreakerPlayerAIComponent::StopLogic() {
}

void UBreakerPlayerAIComponent::StartLogic() {
}

void UBreakerPlayerAIComponent::SetStickInputForFrames(int32 StartFrame, int32 EndFrame, TEnumAsByte<BreakerAIStickStyle> Style, FVector Direction) {
}

void UBreakerPlayerAIComponent::SetRightStickInputForFrames(int32 StartFrame, int32 EndFrame, TEnumAsByte<BreakerAIStickStyle> Style, FVector Direction) {
}

void UBreakerPlayerAIComponent::SetButtonInputForFrames(int32 StartFrame, int32 EndFrame, TEnumAsByte<BreakerAIButtonType> Button, bool Value) {
}

bool UBreakerPlayerAIComponent::RunHeadlessBehaviorTree(UBehaviorTree* BTAsset) {
    return false;
}

bool UBreakerPlayerAIComponent::IsLogicSuspended() const {
    return false;
}

bool UBreakerPlayerAIComponent::IsInputQueueEmpty() {
    return false;
}

void UBreakerPlayerAIComponent::ClearAllInputs() {
}


