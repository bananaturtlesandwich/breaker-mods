#include "ShrineManager.h"
#include "Net/UnrealNetwork.h"

UShrineManager::UShrineManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShrineActivationTime = 300.00f;
    this->ShrineActivationTimer = 0.00f;
    this->ShrinesActivated = false;
    this->NumberOfShrineRevivesInRun = 0;
    this->HealthKitCostIncrease = 0.00f;
}

void UShrineManager::ShrinesActivated_Multicast_Implementation() {
}

void UShrineManager::ShrineReviveUsed() {
}

void UShrineManager::ResetShrineManager() {
}

FCurrencyCostMap UShrineManager::GetShrineReviveCostMap() {
    return FCurrencyCostMap{};
}

FCurrencyCostMap UShrineManager::GetShrineHealthKitCost() {
    return FCurrencyCostMap{};
}

void UShrineManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UShrineManager, NumberOfShrineRevivesInRun);
}


