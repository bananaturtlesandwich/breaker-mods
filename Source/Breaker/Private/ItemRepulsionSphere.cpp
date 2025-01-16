#include "ItemRepulsionSphere.h"

UItemRepulsionSphere::UItemRepulsionSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bIsMovable = true;
    this->RepulsionStrength = 100.00f;
    this->bFakeGravity = true;
    this->GravityStrength = 100.00f;
    this->MovementHelper = NULL;
    this->ActiveFloor = NULL;
}

void UItemRepulsionSphere::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UItemRepulsionSphere::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


