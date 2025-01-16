#include "PlayerSessionDetailsObject.h"

UPlayerSessionDetailsObject::UPlayerSessionDetailsObject() {
    this->AcquiredBrightBloodAmount = 0;
    this->AcquiredMaterials = 0;
    this->AmpsUsedAmount = 0;
    this->DamageDealtAmount = 0.00f;
    this->DamageReceivedAmount = 0.00f;
    this->DashCount = 0;
    this->HealthKitsUsedAmount = 0;
    this->LevelExperience = 0;
    this->LevelProgression = 1;
    this->MinibossesKilledAmount = 0;
    this->MinionsKilledAmount = 0;
    this->PlayerRevivesAmount = 0;
    this->SessionTime = 0.00f;
}

void UPlayerSessionDetailsObject::RemoveAcquiredSchematic(FGameplayTag Tag) {
}

void UPlayerSessionDetailsObject::ModifyMinionsKilledAmount(const int32& Amount) {
}

void UPlayerSessionDetailsObject::ModifyMinibossesKilledAmount(const int32& Amount) {
}

void UPlayerSessionDetailsObject::ModifyLevelProgression(const int32& Amount) {
}

void UPlayerSessionDetailsObject::ModifyLevelExperience(const int32& Amount) {
}

void UPlayerSessionDetailsObject::ModifyEquipmentLoadout(const TArray<FGameplayTag>& Loadout) {
}

void UPlayerSessionDetailsObject::ModifyDamageReceivedAmount(const float& Amount) {
}

void UPlayerSessionDetailsObject::ModifyDamageDealtAmount(const float& Amount) {
}

void UPlayerSessionDetailsObject::ModifyAcquiredMaterials(const int32& Amount) {
}

void UPlayerSessionDetailsObject::ModifyAcquiredBrightbloodAmount(const int32& Amount) {
}

bool UPlayerSessionDetailsObject::IsSessionInProgress() const {
    return false;
}

bool UPlayerSessionDetailsObject::IsSessionComplete() const {
    return false;
}

bool UPlayerSessionDetailsObject::IsEquipmentLoadoutValid() {
    return false;
}

void UPlayerSessionDetailsObject::IncrementPlayerRevivesAmount() {
}

void UPlayerSessionDetailsObject::IncrementHealthKitsUsedCount() {
}

void UPlayerSessionDetailsObject::IncrementDashCount() {
}

void UPlayerSessionDetailsObject::IncrementAmpsUsed() {
}

UPlayerSessionDetailsObject* UPlayerSessionDetailsObject::GetPlayerSessionDetailsObject(UObject* WorldContext) {
    return NULL;
}

void UPlayerSessionDetailsObject::AddAcquiredSchematic(const FGameplayTag& Tag) {
}


