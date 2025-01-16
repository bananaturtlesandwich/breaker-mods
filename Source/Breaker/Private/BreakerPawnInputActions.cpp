#include "BreakerPawnInputActions.h"
#include "Net/UnrealNetwork.h"

UBreakerPawnInputActions::UBreakerPawnInputActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionMappingVersion = 12;
    this->ActionMappings.AddDefaulted(13);
    this->bSceneControl = false;
    this->OwningPawn = NULL;
}

void UBreakerPawnInputActions::TickStick_Server_Implementation(const FCharacterMovementStick& Stick, const FCharacterMovementStick& LiveStick, float LocalTime) {
}

void UBreakerPawnInputActions::TickCamera_Server_Implementation(const FCameraPOV& CamPOV, float LocalTime) {
}

void UBreakerPawnInputActions::SetSceneControlMovement(FVector Axis) {
}

void UBreakerPawnInputActions::SetSceneControlCamera(float Pitch, float Yaw) {
}

void UBreakerPawnInputActions::SetExternalControl(float Time) {
}

void UBreakerPawnInputActions::ReleaseExternalControl() {
}

void UBreakerPawnInputActions::OnJumped_Multicast_Implementation(int32 WhichJump, FVector Impulse) {
}

void UBreakerPawnInputActions::Multicast_Stick_Implementation(const FCharacterMovementStick& Stick, const FCharacterMovementStick& LiveStick) {
}

void UBreakerPawnInputActions::InputTick_Server_Implementation(const FCharacterMovementInput& aInput, float LocalTime) {
}

bool UBreakerPawnInputActions::DoesHaveExternalControl() {
    return false;
}

void UBreakerPawnInputActions::BroadcastJump_Server_Implementation(int32 WhichJump, FVector Impulse) {
}

bool UBreakerPawnInputActions::BotHasControl(bool bMovement, bool bCamera, bool bButtons) const {
    return false;
}

void UBreakerPawnInputActions::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerPawnInputActions, RepInput);
    DOREPLIFETIME(UBreakerPawnInputActions, RepCamPov);
}


