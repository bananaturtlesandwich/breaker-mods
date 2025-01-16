#include "BreakerSpatialAudioBoxComponent.h"

UBreakerSpatialAudioBoxComponent::UBreakerSpatialAudioBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bSetLocalPlayerIndoorAudioState = false;
    this->bIsolateOverlappingAudioMultiPositions = false;
}

void UBreakerSpatialAudioBoxComponent::OnEndOverlap_Internal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


void UBreakerSpatialAudioBoxComponent::OnBeginOverlap_Internal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


FGameplayTagContainer UBreakerSpatialAudioBoxComponent::GetSpatialAudioGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

bool UBreakerSpatialAudioBoxComponent::CanSetLocalPlayerIndoorAudioState_Implementation() {
    return false;
}

bool UBreakerSpatialAudioBoxComponent::CanIsolateOverlappingAudioMultiPositions_Implementation() {
    return false;
}


