#include "EnemyLifeCycleComponent.h"
#include "Net/UnrealNetwork.h"

UEnemyLifeCycleComponent::UEnemyLifeCycleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasBeenRetiredToPool = false;
    this->TimesInitializedFromPool = 0;
    this->EnemyPoolingState = EEnemyPoolingState::NotPooled;
    this->EnemyPoolingStateOld = EEnemyPoolingState::NotPooled;
    this->DebugCloseToPlayer = false;
    this->DespawnDistance = -1.00f;
}

void UEnemyLifeCycleComponent::SetDespawnDistance(float Distance) {
}

void UEnemyLifeCycleComponent::OnRep_EnemyPoolingState() {
}

bool UEnemyLifeCycleComponent::IsSpawned() const {
    return false;
}

bool UEnemyLifeCycleComponent::IsPooled() const {
    return false;
}

bool UEnemyLifeCycleComponent::HasBeenInitializedFromPool() const {
    return false;
}

void UEnemyLifeCycleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnemyLifeCycleComponent, EnemyPoolingState);
}


