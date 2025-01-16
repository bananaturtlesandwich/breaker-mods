#include "BreakerCamModifier.h"

UBreakerCamModifier::UBreakerCamModifier() {
}

void UBreakerCamModifier::TickModifier(const ABreakerCam* Camera, float DeltaTime) {
}

void UBreakerCamModifier::Stop() {
}

void UBreakerCamModifier::Start(const FBreakerCamModifierData& InitData) {
}







bool UBreakerCamModifier::IsStopped() const {
    return false;
}

ABreakerPawn* UBreakerCamModifier::GetOwningPawn() const {
    return NULL;
}

ABreakerCam* UBreakerCamModifier::GetOwningCamera() const {
    return NULL;
}

float UBreakerCamModifier::GetAge() const {
    return 0.0f;
}

void UBreakerCamModifier::DisplacePOV(FCameraPOV& InOutPOV, const FVector& LocalOffset) const {
}


