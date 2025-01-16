#include "BreakerSpatialAudioMeshComponent.h"

UBreakerSpatialAudioMeshComponent::UBreakerSpatialAudioMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bSetLocalPlayerIndoorAudioState = false;
    this->bIsolateOverlappingAudioMultiPositions = false;
}

void UBreakerSpatialAudioMeshComponent::OnEndOverlap_Internal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


void UBreakerSpatialAudioMeshComponent::OnBeginOverlap_Internal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


FGameplayTagContainer UBreakerSpatialAudioMeshComponent::GetSpatialAudioGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

bool UBreakerSpatialAudioMeshComponent::CanSetLocalPlayerIndoorAudioState_Implementation() {
    return false;
}

bool UBreakerSpatialAudioMeshComponent::CanIsolateOverlappingAudioMultiPositions_Implementation() {
    return false;
}


