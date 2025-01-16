#include "StageReadyManager.h"

UStageReadyManager::UStageReadyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UStageReadyManager::IsStageReady() const {
    return false;
}

UStageReadyManager* UStageReadyManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


