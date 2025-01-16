#include "HitStopComponent.h"

UHitStopComponent::UHitStopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultHitStopTimeDilation = 0.01f;
    this->DefaultHitStopDuration = 0.06f;
    this->bDisableHitStop = false;
    this->bUseGlobalTimeDilation = false;
    this->NumberOfFreezeFramesOnHit = 1;
}

void UHitStopComponent::SetPassiveLocalTimeDilation(const FString& Key, float Multiplier) {
}

void UHitStopComponent::RemovePassiveLocalTimeDilation(const FString& Key) {
}

void UHitStopComponent::RemoveHitStopFollower(AActor* FollowingActor, float NewTimeDilation) {
}

float UHitStopComponent::GetPassiveLocalTimeDilation() const {
    return 0.0f;
}

void UHitStopComponent::FreezeForFrameCount(int32 NumFrames) {
}

void UHitStopComponent::AddHitStopFollower(AActor* FollowingActor) {
}

void UHitStopComponent::ActivateHitStopDetails(AActor* OtherActor, FHitStopDetails HitStopDetails, float OtherModifier) {
}

void UHitStopComponent::ActivateDefaultHitStop(AActor* OtherActor, float OtherModifier) {
}

void UHitStopComponent::ActivateCustomHitStop(AActor* OtherActor, float CustomDilation, float CustomDuration, float OtherModifier) {
}


