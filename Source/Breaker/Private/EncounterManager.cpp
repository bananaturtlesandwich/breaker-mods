#include "EncounterManager.h"

UEncounterManager::UEncounterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentEncounterID = -1;
}

void UEncounterManager::UnregisterEncounter(int32 EncounterID) {
}

bool UEncounterManager::SetEncounterState(int32 EncounterID, EEncounterState EncounterState) {
    return false;
}

void UEncounterManager::ResetEncounterManager() {
}

void UEncounterManager::RegisterEncounter(EEncounterType EncounterType, ACMCharBase* Enemy, TArray<ACMCharBase*> SupportEnemies, int32& EncounterID) {
}

bool UEncounterManager::IsEncounterInProgress() {
    return false;
}

FEncounterInfo UEncounterManager::GetCurrentEncounter() {
    return FEncounterInfo{};
}


