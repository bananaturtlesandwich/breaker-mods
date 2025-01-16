#include "PingComponent.h"

UPingComponent::UPingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PingDistance = 50000.00f;
    this->PingDelay = 1.00f;
}

void UPingComponent::SendPingMessage_Server_Implementation(const FName& PingName, FVector Location, bool bAutoDestroy, AActor* RepActor) {
}


