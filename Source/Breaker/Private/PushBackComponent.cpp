#include "PushBackComponent.h"

UPushBackComponent::UPushBackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PushBackEasingDuration = 0.17f;
    this->DistanceToImpulseConversionFactor = 10.00f;
    this->bIgnorePushes = false;
}

void UPushBackComponent::TickPushBack(float DeltaTime) {
}

void UPushBackComponent::Reset() {
}

bool UPushBackComponent::IsComponentOwnerAI() const {
    return false;
}

void UPushBackComponent::HandleOnMovementModeChanged(ABreakerPawn* Owner, TScriptInterface<IBreakerMovementDelegate> PrevState, TScriptInterface<IBreakerMovementDelegate> CurrState) {
}

void UPushBackComponent::AppendPushBack(FVector PushBack, EPushBackSourceType PushType) {
}


