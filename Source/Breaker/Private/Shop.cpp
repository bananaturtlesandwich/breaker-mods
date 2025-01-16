#include "Shop.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "BreakerInteractableComponent.h"

AShop::AShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
    this->MeshRoot = (UStaticMeshComponent*)RootComponent;
    this->PopUpUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("PopUpUI"));
    this->BoxActivator = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxActivator"));
    this->Interactable = CreateDefaultSubobject<UBreakerInteractableComponent>(TEXT("Interactable"));
    this->NPC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCSkeleton"));
    this->ShopType = EShopType::None;
    this->InteractionRadius = 300.00f;
    this->BoxActivator->SetupAttachment(RootComponent);
    this->Interactable->SetupAttachment(RootComponent);
    this->NPC->SetupAttachment(RootComponent);
    this->PopUpUI->SetupAttachment(RootComponent);
}


void AShop::OverlapEnable(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AShop::OverlapDisable(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AShop::OpenMenu(AActor* OtherPawn, bool bIsServer) {
}


