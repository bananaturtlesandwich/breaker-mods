#include "TutorialTrigger_Box.h"

UTutorialTrigger_Box::UTutorialTrigger_Box(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->TutorialTrigger = ETutorialTrigger::DEFAULT;
}

void UTutorialTrigger_Box::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}


