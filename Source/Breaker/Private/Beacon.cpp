#include "Beacon.h"
#include "Net/UnrealNetwork.h"

ABeacon::ABeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->BeaconState = EBeaconActivityState::EBeaconState_Inactive;
    this->TurretClass = NULL;
    this->TurretComponentClass = NULL;
    this->BeaconEvent = NULL;
}

void ABeacon::Server_SetBeaconState(EBeaconActivityState State) {
}

void ABeacon::OnRep_BeaconState() {
}

void ABeacon::OnBeaconStateUpdated_Implementation() {
}

void ABeacon::OnBeaconStateInProgress_Implementation() {
}

void ABeacon::OnBeaconStateFailed_Implementation() {
}

void ABeacon::OnBeaconStateCompleted_Implementation() {
}

void ABeacon::OnBeaconStateActivated_Implementation() {
}

bool ABeacon::IsInProgress() {
    return false;
}

bool ABeacon::IsInactive() {
    return false;
}

bool ABeacon::IsActivated() {
    return false;
}


void ABeacon::Fail() {
}

void ABeacon::Complete() {
}

void ABeacon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABeacon, BeaconState);
    DOREPLIFETIME(ABeacon, BeaconEvent);
}


