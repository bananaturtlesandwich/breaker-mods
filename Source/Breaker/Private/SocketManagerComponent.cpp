#include "SocketManagerComponent.h"

USocketManagerComponent::USocketManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool USocketManagerComponent::FindRandomSocketTransform(FName SocketCategory, FTransform& OutTransform) const {
    return false;
}

bool USocketManagerComponent::FindRandomSocket(FName SocketCategory, FSocketDetails& OutSocketDetails) const {
    return false;
}

bool USocketManagerComponent::FindNearestSocketTransform(FName SocketCategory, FVector QueryPosition, FTransform& OutTransform) const {
    return false;
}

bool USocketManagerComponent::FindNearestSocket(FName SocketCategory, FVector QueryPosition, FSocketDetails& OutSocketDetails) const {
    return false;
}


