#include "DangerMeterComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UDangerMeterComponent::UDangerMeterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DangerMeter = 0;
    this->DangerMeterTriggerValue = 100;
    this->DangerDifficulty = 0;
    this->DangerDifficultyMax = 5;
    this->NumberOfTimesTriggeredInRun = 0;
    this->DangerActionDataTable = NULL;
    this->DangerEventDataTable = NULL;
    this->DangerEventDifficultyModifierTable = NULL;
    this->AdditionalDangerEventClass = NULL;
    this->AdditionalDangerEventDifficulty = -1;
    this->AutoDangerEventAtMaxLevel_TimeBetweenEvents = 30.00f;
    this->AutoDangerEventAtMaxLevel_Timer = 0.00f;
    this->AutoDangerEventAtMaxLevel_Class = NULL;
    this->NumberOfAdditionalDangerEvents = 0;
    this->NumberOfAutoDangerEvents = 0;
}

void UDangerMeterComponent::UnRegisterDangerEventInProgress(ADangerEvent* DangerEvent) {
}

bool UDangerMeterComponent::TriggerDangerEvent(TSubclassOf<ADangerEvent> DangerEventClass) {
    return false;
}

void UDangerMeterComponent::SetDangerDifficulty(int32 NewDifficulty) {
}

void UDangerMeterComponent::ResetDanger() {
}

void UDangerMeterComponent::RemoveDanger(int32 DangerAmount) {
}

void UDangerMeterComponent::RegisterDangerEventInProgress(ADangerEvent* DangerEvent) {
}

void UDangerMeterComponent::OnRep_DangerMeter() {
}

void UDangerMeterComponent::OnRep_DangerDifficulty() {
}

void UDangerMeterComponent::InitializeDangerForHostMigration() {
}

float UDangerMeterComponent::GetWeightOfDangerEvent(int32 Difficulty, const FDangerEventData& DangerEventData) {
    return 0.0f;
}

float UDangerMeterComponent::GetTotalWeightOfAllDangerEvents(int32 Difficulty) {
    return 0.0f;
}

float UDangerMeterComponent::GetNormalizedDanger() const {
    return 0.0f;
}

int32 UDangerMeterComponent::GetModifiedDangerMeterDifficulty() const {
    return 0;
}

int32 UDangerMeterComponent::GetDangerPointsForDangerAction(EDangerActionType DangerAction) {
    return 0;
}

int32 UDangerMeterComponent::GetCurrentDangerMeterTriggerValue() const {
    return 0;
}

void UDangerMeterComponent::DangerTriggeredVerySoon_Multicast_Implementation(int32 Notification) {
}

void UDangerMeterComponent::DangerTriggered_Multicast_Implementation(FName DangerEventRowName) {
}

bool UDangerMeterComponent::CanAddDanger() {
    return false;
}

bool UDangerMeterComponent::AddDangerOnClient(int32 DangerAmount) {
    return false;
}

bool UDangerMeterComponent::AddDangerActionOnClient(EDangerActionType DangerAction) {
    return false;
}

bool UDangerMeterComponent::AddDangerAction(EDangerActionType DangerAction) {
    return false;
}

void UDangerMeterComponent::AddDanger(int32 DangerAmount) {
}

void UDangerMeterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDangerMeterComponent, DangerMeter);
    DOREPLIFETIME(UDangerMeterComponent, DangerDifficulty);
}


