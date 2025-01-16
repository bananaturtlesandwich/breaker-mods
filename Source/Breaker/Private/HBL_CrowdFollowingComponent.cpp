#include "HBL_CrowdFollowingComponent.h"

UHBL_CrowdFollowingComponent::UHBL_CrowdFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPreserveMomentumOnPathEnd = false;
}

void UHBL_CrowdFollowingComponent::SetMomentumRequestOnPathEndBP(const FAIRequestID inRequestStatus, const bool bInRequestStatus) {
}

void UHBL_CrowdFollowingComponent::ResetPreserveMomentumForPathRequest() {
}


