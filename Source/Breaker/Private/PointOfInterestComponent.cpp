#include "PointOfInterestComponent.h"

UPointOfInterestComponent::UPointOfInterestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultDisplayData = NULL;
    this->bAutoRegister = true;
    this->bRegisterWhenClose = false;
    this->bDeregisterWhenFar = false;
    this->detectionDistance = 3500.00f;
}

void UPointOfInterestComponent::UnregisterPoint() {
}

void UPointOfInterestComponent::StartDistanceCheck() {
}

void UPointOfInterestComponent::SetRequiresAttention(bool bNewRequiresAttention) {
}

void UPointOfInterestComponent::SetObjectiveDone(bool bNewObjectiveDone) {
}

void UPointOfInterestComponent::SetIsHighlighted(bool bNewIsHighlighted) {
}

void UPointOfInterestComponent::SetCustomIcon(UTexture2D* newIcon) {
}

void UPointOfInterestComponent::SetCustomDisplayName(FText newDisplayName) {
}

void UPointOfInterestComponent::RegisterPointFromSave() {
}

void UPointOfInterestComponent::RegisterPoint() {
}

bool UPointOfInterestComponent::IsPointRegistered() {
    return false;
}

float UPointOfInterestComponent::GetVerticalityDistance_Implementation() const {
    return 0.0f;
}

bool UPointOfInterestComponent::GetRestrictToBiome_Implementation() const {
    return false;
}

bool UPointOfInterestComponent::GetRequiresAttention() {
    return false;
}

float UPointOfInterestComponent::GetRadarRange_Implementation() const {
    return 0.0f;
}

bool UPointOfInterestComponent::GetOmitFromMap_Implementation() const {
    return false;
}

bool UPointOfInterestComponent::GetOmitFromCompass_Implementation() const {
    return false;
}

bool UPointOfInterestComponent::GetObjectiveDone() {
    return false;
}

bool UPointOfInterestComponent::GetIsHighlighted() {
    return false;
}

float UPointOfInterestComponent::GetIconScale_Implementation() const {
    return 0.0f;
}

int32 UPointOfInterestComponent::GetDisplayZOrder_Implementation() const {
    return 0;
}

bool UPointOfInterestComponent::GetDisplayName_Implementation(FText& DisplayName) const {
    return false;
}

UTexture2D* UPointOfInterestComponent::GetDisplayIconDone_Implementation() const {
    return NULL;
}

UTexture2D* UPointOfInterestComponent::GetDisplayIcon_Implementation() const {
    return NULL;
}

FLinearColor UPointOfInterestComponent::GetColorTint_Implementation() const {
    return FLinearColor{};
}

bool UPointOfInterestComponent::GetClampToMapEdge_Implementation() const {
    return false;
}

void UPointOfInterestComponent::CancelDistanceCheck() {
}


