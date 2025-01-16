#include "TutorialTriggerComponent.h"
#include "Components/SphereComponent.h"

UTutorialTriggerComponent::UTutorialTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerVolume"));
    this->TriggerRadius = 500.00f;
    this->TutorialTrigger = ETutorialTrigger::DEFAULT;
}

void UTutorialTriggerComponent::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}


