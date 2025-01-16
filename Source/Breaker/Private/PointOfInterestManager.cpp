#include "PointOfInterestManager.h"

UPointOfInterestManager::UPointOfInterestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<UPointOfInterestComponent*> UPointOfInterestManager::GetRegisteredPoints() const {
    return TArray<UPointOfInterestComponent*>();
}

UPointOfInterestManager* UPointOfInterestManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


