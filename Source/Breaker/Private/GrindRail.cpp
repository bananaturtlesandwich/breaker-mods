#include "GrindRail.h"
#include "Components/SplineComponent.h"

AGrindRail::AGrindRail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->AttachDistance = 150.00f;
    this->AttachSpeed = 10.00f;
}


