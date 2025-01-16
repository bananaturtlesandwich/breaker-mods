#include "RobotShrine.h"
#include "Net/UnrealNetwork.h"

ARobotShrine::ARobotShrine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ActivatedRobotShine = false;
    this->ExtractionBeam = NULL;
    this->ExtractionBeamClass = NULL;
}

void ARobotShrine::ShrineDiscovered_Multicast_Implementation() {
}

void ARobotShrine::SaveShrineAsRunStartLocation() {
}





void ARobotShrine::FindExtractionBeam() {
}

void ARobotShrine::ActivateShrineExtraction() {
}

void ARobotShrine::ActivateRobotShrine() {
}

void ARobotShrine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARobotShrine, ExtractionBeam);
}


