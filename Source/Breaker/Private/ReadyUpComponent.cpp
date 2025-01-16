#include "ReadyUpComponent.h"
#include "Net/UnrealNetwork.h"

UReadyUpComponent::UReadyUpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllPlayersReadyMaxCountdownTime = 3;
    this->CountdownTime = 15;
    this->bLocalPlayerReady = false;
    this->PlayerInitiator = -1;
}

void UReadyUpComponent::SetCountdownTime(int32 NewTime) {
}

void UReadyUpComponent::ResetReady() {
}

void UReadyUpComponent::Multicast_PlayerSetReady_Implementation(int32 PlayerId, AActor* SourceActor, const FText& Target) {
}

void UReadyUpComponent::Multicast_MoreThanHalf_Implementation() {
}

void UReadyUpComponent::Multicast_ForceCancel_Implementation() {
}

void UReadyUpComponent::Multicast_ExecuteTransition_Implementation() {
}

void UReadyUpComponent::Multicast_CancelReady_Implementation(int32 PlayerId) {
}

void UReadyUpComponent::Multicast_BeginCountdown_Implementation(int32 CountdownOverride) {
}

void UReadyUpComponent::LocalPlayerSetReady() {
}

bool UReadyUpComponent::GetShouldBeHidden() {
    return false;
}

int32 UReadyUpComponent::GetNumPlayersReady() {
    return 0;
}

int32 UReadyUpComponent::GetNumActivePlayers() {
    return 0;
}

UReadyUpComponent* UReadyUpComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UReadyUpComponent::ForceCancel(ELevelState NewLevel, ELevelState OldLevel) {
}

void UReadyUpComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReadyUpComponent, CountdownTime);
    DOREPLIFETIME(UReadyUpComponent, PlayerInitiator);
}


