#include "AssassinNavigationSubsystem.h"

UAssassinNavigationSubsystem::UAssassinNavigationSubsystem() {
    this->bUseBlueprintCustomTargetAssignment = true;
}

void UAssassinNavigationSubsystem::UpdateChoreographryComponentTargetDataForAssassin(FAIAssassinRuntimeData& inAssassinInfo) {
}

AActor* UAssassinNavigationSubsystem::SetAssassinPlayerTarget(FAIAssassinRuntimeData& inAssassinInfo, const AActor* inPlayerTargetAsActor) {
    return NULL;
}

void UAssassinNavigationSubsystem::RegisterAndInitializeAssassinRuntimeMetaData(const ACMCharBase* assassinToRegister, bool bIsInitialPoolInit) {
}


void UAssassinNavigationSubsystem::OnAssassinRetiredToPool_Implementation(ACMCharBase* inAssassinBaseCMChar) {
}

bool UAssassinNavigationSubsystem::HasValidCurrentTarget(ACMCharBase* inAssassin) {
    return false;
}

FAIAssassinRuntimeData UAssassinNavigationSubsystem::GetAssassinRuntimeData(ACMCharBase* inAssassin, bool& bFoundAssassinRuntimeData) {
    return FAIAssassinRuntimeData{};
}

UAssassinNavigationSubsystem* UAssassinNavigationSubsystem::GetAssassinNavigationSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

AActor* UAssassinNavigationSubsystem::GetAssassinCurrentTarget(ACMCharBase* inAssassin) {
    return NULL;
}

AActor* UAssassinNavigationSubsystem::FindGlobalTargetForAssassin(FAIAssassinRuntimeData& outAssassinInfo) {
    return NULL;
}

AActor* UAssassinNavigationSubsystem::DetermineAssassinTarget(const ACMCharBase* inAssassinRequiringTarget) {
    return NULL;
}


