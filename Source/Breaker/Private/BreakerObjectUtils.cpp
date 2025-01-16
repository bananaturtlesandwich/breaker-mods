#include "BreakerObjectUtils.h"

UBreakerObjectUtils::UBreakerObjectUtils() {
}

void UBreakerObjectUtils::SetObjectDirty(UObject* Object) {
}

void UBreakerObjectUtils::SaveClassConfigObject(UObject* ConfigObject) {
}

bool UBreakerObjectUtils::ObjectHasOwningWorld(UObject* TheObject) {
    return false;
}

FString UBreakerObjectUtils::GetNetModeStringForCurrentWorld(const UObject* WorldContextObject) {
    return TEXT("");
}

void UBreakerObjectUtils::GetMutableClassConfigObject(UClass* Class, UObject*& OutConfigObject) {
}

FString UBreakerObjectUtils::GetCurrentWorldName(UObject* WorldContextObject) {
    return TEXT("");
}

void UBreakerObjectUtils::ConstructObjectWithFlags(UClass* Class, UObject* Outer, bool bTransient, bool bPublic, bool bStandalone, UObject*& OutNewObject) {
}

void UBreakerObjectUtils::ClearObjectDirtyFlag(UObject* Object) {
}


