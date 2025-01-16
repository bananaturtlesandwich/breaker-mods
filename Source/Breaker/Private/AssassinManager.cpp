#include "AssassinManager.h"
#include "Templates/SubclassOf.h"

UAssassinManager::UAssassinManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssassinDataTable = NULL;
}

ACMCharBase* UAssassinManager::SpawnAssassin(UObject* WorldContextObject, FVector Location, float RadiusMin, float RadiusMax, bool ShowAssassinSpawnedMessage) {
    return NULL;
}

bool UAssassinManager::InitializeAssassinData() {
    return false;
}

TSubclassOf<ACMCharBase> UAssassinManager::GetRandomAssassinClass() {
    return NULL;
}

int32 UAssassinManager::GetNumberOfAssassins() {
    return 0;
}

ACMCharBase* UAssassinManager::GetAssassin() {
    return NULL;
}

void UAssassinManager::DespawnAllAssassins() {
}

void UAssassinManager::AssassinSpawned_Multicast_Implementation(ACMCharBase* Enemy, bool ShowAssassinSpawnedMessage) {
}

void UAssassinManager::AssassinDespawned_Multicast_Implementation(ACMCharBase* Enemy) {
}

void UAssassinManager::AssassinDespawned(ACMCharBase* Actor) {
}

void UAssassinManager::AssassinDefeated_Multicast_Implementation(ACMCharBase* Enemy) {
}

void UAssassinManager::AssassinDefeated(AActor* Actor) {
}


