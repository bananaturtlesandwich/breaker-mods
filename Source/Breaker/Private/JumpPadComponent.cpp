#include "JumpPadComponent.h"

UJumpPadComponent::UJumpPadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelaunchDelay = 0.10f;
    this->InteractableComp = NULL;
    this->UIBox = NULL;
    this->StandingParticleComponent = NULL;
    this->JumpParticleComponent = NULL;
    this->StandingParticleSystem = NULL;
    this->JumpParticleSystem = NULL;
}

void UJumpPadComponent::UIBoxEnable(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UJumpPadComponent::UIBoxDisable(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UJumpPadComponent::EnableLaunch() {
}

void UJumpPadComponent::ApplyImpulse(AActor* Pawn, bool IsServer) {
}

void UJumpPadComponent::ActivateStandingParticleEffect(bool bActivate) {
}

void UJumpPadComponent::ActivateJumpParticleEffect(bool bActivate) {
}
