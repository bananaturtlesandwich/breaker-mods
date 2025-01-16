#include "BeaconEvent.h"
#include "Net/UnrealNetwork.h"

ABeaconEvent::ABeaconEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Beacon = NULL;
    this->Timer = -1.00f;
    this->Time = 0.00f;
    this->HurryUpTime = 0.00f;
    this->EventTypeAudioValue = NULL;
}

void ABeaconEvent::StartTimer() {
}






bool ABeaconEvent::IsHurryUpTime() {
    return false;
}

void ABeaconEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABeaconEvent, Beacon);
}


