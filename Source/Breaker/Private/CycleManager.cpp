#include "CycleManager.h"
#include "Net/UnrealNetwork.h"

UCycleManager::UCycleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CycleDataTable = NULL;
    this->StartRunIndex = -1;
    this->StartingCycleLives = 7;
    this->CurrentCycleDataCacheIndex = -1;
    this->RemainingRunsInCycle = -1;
    this->PredictedCycleReset = false;
    this->ResetCycleWhenReturningToHub = false;
    this->CycleStatus = ECycleStatus::None;
    this->CycleRuns = 0;
    this->CycleHealthKitsBought = 0;
}

void UCycleManager::ResetCycle() {
}

void UCycleManager::ProceedToNextCycle() {
}

void UCycleManager::OnRep_RemainingRunsInCycle() {
}

void UCycleManager::OnRep_CycleStatus() {
}

void UCycleManager::OnRep_CycleRuns() {
}

void UCycleManager::OnRep_CycleHealthKitsBought() {
}

void UCycleManager::ModifyCurrentCycleData_TimeOfDay(float Time) {
}

bool UCycleManager::JumpToPreviousRunInCycle() {
    return false;
}

bool UCycleManager::JumpToNextRunInCycle() {
    return false;
}

bool UCycleManager::InitializeCycleData() {
    return false;
}

void UCycleManager::HealthKitBought() {
}

void UCycleManager::GetTimeOfDayForRunInCycle(bool& ValidCycleTime, float& TimeOfDay) {
}

int32 UCycleManager::GetRemainingCycleLives() const {
    return 0;
}

int32 UCycleManager::GetCurrentCycleNumber() {
    return 0;
}

void UCycleManager::GetCurrentCycleData(bool& Valid, FCycleData& Data) {
}

void UCycleManager::EnterRun() {
}

void UCycleManager::EnterHub() {
}

void UCycleManager::CompleteCycle() {
}

void UCycleManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCycleManager, RemainingRunsInCycle);
    DOREPLIFETIME(UCycleManager, ResetCycleWhenReturningToHub);
    DOREPLIFETIME(UCycleManager, CycleStatus);
    DOREPLIFETIME(UCycleManager, CycleRuns);
    DOREPLIFETIME(UCycleManager, CycleHealthKitsBought);
}


