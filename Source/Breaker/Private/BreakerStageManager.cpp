#include "BreakerStageManager.h"

UBreakerStageManager::UBreakerStageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageTime = 300.00f;
    this->DawnTimeNormalized = 0.20f;
    this->DuskTimeNormalized = 0.80f;
    this->CurrentStageInfo = NULL;
}

void UBreakerStageManager::SetTimeOfDayTickEnabled(bool bIsTicking) {
}

void UBreakerStageManager::SetCurrentTimeOfDay(float SecondsIntoDay) {
}

void UBreakerStageManager::OverrideTotalStageTime(float InTotalStageTime) {
}

void UBreakerStageManager::OverrideTotalDaySeconds(float InTotalDaySeconds) {
}

bool UBreakerStageManager::IsTimeOfDayTickEnabled() const {
    return false;
}

bool UBreakerStageManager::IsNightTime() const {
    return false;
}

bool UBreakerStageManager::IsInitialized() const {
    return false;
}

void UBreakerStageManager::Initialize(UBreakerStageInfo* InStageInfo) {
}

float UBreakerStageManager::GetTotalStageSeconds() const {
    return 0.0f;
}

float UBreakerStageManager::GetTotalDaySeconds() const {
    return 0.0f;
}

float UBreakerStageManager::GetTimeInSecondsUntilNight() const {
    return 0.0f;
}

float UBreakerStageManager::GetTimeInSecondsUntilDay() const {
    return 0.0f;
}

float UBreakerStageManager::GetNormalizedTimeOfDay() const {
    return 0.0f;
}

float UBreakerStageManager::GetCurrentTimeOfDay() const {
    return 0.0f;
}

UBreakerStageInfo* UBreakerStageManager::GetCurrentStageInfo() const {
    return NULL;
}

int32 UBreakerStageManager::GetCurrentDay() const {
    return 0;
}

UBreakerStageManager* UBreakerStageManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UBreakerStageManager::AdjustTotalDaySeconds(float Amount) {
}


