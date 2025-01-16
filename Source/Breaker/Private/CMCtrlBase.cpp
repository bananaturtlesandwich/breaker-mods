#include "CMCtrlBase.h"
#include "HBL_CrowdFollowingComponent.h"

ACMCtrlBase::ACMCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHBL_CrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bAllowSmoothRotation = false;
    this->AINavQueryFilterCustomPath = NULL;
}

void ACMCtrlBase::UpdateAINavQueryFilterCustomPath() {
}

bool ACMCtrlBase::ToggleCrowdFollowingAvoidance(const bool bEnableCrowdFollowingAvoidance) {
    return false;
}

void ACMCtrlBase::ReInitBaseBlackboardData_BP() {
}


AActor* ACMCtrlBase::OnDetermineAssassinTarget_Implementation(ACMCharBase* inAssassinBaseCMChar, const FAIAssassinRuntimeData& inAssassinRuntimeData, const TArray<FAIAssassinRuntimeData>& inAllAssassinRuntimeMetaData) {
    return NULL;
}

void ACMCtrlBase::OnBlackboardInitializedBP_Implementation(UBlackboardComponent* inBlackboardComponent, UBlackboardData* BlackboardAsset) {
}

bool ACMCtrlBase::HasValidPath() {
    return false;
}

FVector ACMCtrlBase::GetPathDestination() {
    return FVector{};
}

UAINavigationQueryFilter_CustomPath* ACMCtrlBase::GetCustomPathNavQueryFilterOnServer() {
    return NULL;
}

FVector ACMCtrlBase::GetCurrentPathTarget() {
    return FVector{};
}

UPathFollowingComponent* ACMCtrlBase::GetAIPathFollowingComponent() {
    return NULL;
}

UHBL_CrowdFollowingComponent* ACMCtrlBase::GetAICrowdFollowingComponent() {
    return NULL;
}

bool ACMCtrlBase::CanUseCrowdManager() {
    return false;
}


