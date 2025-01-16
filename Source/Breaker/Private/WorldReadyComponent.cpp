#include "WorldReadyComponent.h"
#include "Net/UnrealNetwork.h"

UWorldReadyComponent::UWorldReadyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWorldIsReady = false;
    this->bLocalPlayerReady = false;
}

void UWorldReadyComponent::WorldReady(float LevelFadeInTime) {
}

void UWorldReadyComponent::ResetWorldReady(ELevelState NewLevel, ELevelState OldLevel) {
}

void UWorldReadyComponent::PlayerSetWorldReady(int32 PlayerId) {
}

void UWorldReadyComponent::Multicast_AllPlayersWorldReady_Implementation() {
}

void UWorldReadyComponent::LocalRegisterBoss(ACMCharBase* Boss) {
}

bool UWorldReadyComponent::IsWorldReadyForAllPlayers() {
    return false;
}

bool UWorldReadyComponent::IsBossReady() {
    return false;
}

UWorldReadyComponent* UWorldReadyComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool UWorldReadyComponent::CheckForReplicatedActors() {
    return false;
}

void UWorldReadyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWorldReadyComponent, bWorldIsReady);
}


