#include "GearItemDrop.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "BreakerInteractableComponent.h"

AGearItemDrop::AGearItemDrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene Component"));
    this->InteractableComponent = CreateDefaultSubobject<UBreakerInteractableComponent>(TEXT("Interactable"));
    this->StaticPreviewMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Preview Mesh Component"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Preview Widget Component"));
    this->bShowPreviewLabel = true;
    this->GearDropDistance = 50.00f;
    this->bIsValidGearDrop = true;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->StaticPreviewMeshComponent->SetupAttachment(RootComponent);
    this->WidgetComponent->SetupAttachment(RootComponent);
}


TArray<FGenericGearInfo> AGearItemDrop::GetGearDropInfos() const {
    return TArray<FGenericGearInfo>();
}


