#include "BreakerMineTriggerComponent.h"

UBreakerMineTriggerComponent::UBreakerMineTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplodeDelay = 0.00f;
}

bool UBreakerMineTriggerComponent::Trigger(AActor* Instigator, bool bExplodeImmediately) {
    return false;
}

void UBreakerMineTriggerComponent::OnTriggered_Multicast_Implementation(AActor* Instigator, bool bExplodeImmediately) {
}

bool UBreakerMineTriggerComponent::HasBeenTriggered() const {
    return false;
}

void UBreakerMineTriggerComponent::Explode() {
}

void UBreakerMineTriggerComponent::CatchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


