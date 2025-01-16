#include "DaytimeCycleComponent.h"

UDaytimeCycleComponent::UDaytimeCycleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTimeProgression = true;
    this->bShouldTriggerTimeEvents = true;
    this->bAllowTimeEventPredictions = false;
}

void UDaytimeCycleComponent::SetTimeConfiguration(FDaytimeCycleConfiguration Config) {
}

void UDaytimeCycleComponent::SetNormalizedTimeProgression(float NormalizedTime) {
}

void UDaytimeCycleComponent::OverrideDayCycleTime(float DayCycleTime) {
}

void UDaytimeCycleComponent::Now_24(int32& Hour, int32& Minutes, int32& Seconds) {
}

void UDaytimeCycleComponent::Now(int32& Hour, int32& Minutes, int32& Seconds, bool& IsPM) {
}

void UDaytimeCycleComponent::Multicast_TriggerTimedEvent_Implementation(uint8 Event) {
}

void UDaytimeCycleComponent::Multicast_EnableTimeProgression_Implementation(bool Enabled, float TotalSeconds) {
}

float UDaytimeCycleComponent::GetTotalProgressionSeconds() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetTotalPredictedProgressionSeconds() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetTimeInSecondsUntilNight() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetTimeInSecondsUntilDay() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetSunsetEventTime() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetSunriseEventTime() {
    return 0.0f;
}

bool UDaytimeCycleComponent::GetIsTimeProgressing() {
    return false;
}

bool UDaytimeCycleComponent::GetIsCurrentlyNighttime() {
    return false;
}

bool UDaytimeCycleComponent::GetIsCurrentlyDaytime() {
    return false;
}

float UDaytimeCycleComponent::GetDayCycleLengthSeconds() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetDayCycleLength() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetCurrentTotalTimeProgression() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetCurrentTimeProgressionRealSeconds() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetCurrentTimeProgressionNormalized() {
    return 0.0f;
}

float UDaytimeCycleComponent::GetCurrentTimeProgression() {
    return 0.0f;
}

int32 UDaytimeCycleComponent::GetCurrentDay() {
    return 0;
}

FDaytimeCycleConfiguration UDaytimeCycleComponent::GetConfigurationDetails() const {
    return FDaytimeCycleConfiguration{};
}

FString UDaytimeCycleComponent::FormatCurrentTimeProgression(ETimeProgressionFormatting Formatting) {
    return TEXT("");
}

void UDaytimeCycleComponent::EnableTimeProgression(bool Enabled, float TimeProgressionOverride) {
}

float UDaytimeCycleComponent::ConvertInGameToRealTimeSeconds(float InGameSeconds) {
    return 0.0f;
}

float UDaytimeCycleComponent::CalculateTimeProgression(int32 Hour, int32 Minutes, int32 Seconds) {
    return 0.0f;
}

void UDaytimeCycleComponent::AddTimeProgression(float Hours) {
}


