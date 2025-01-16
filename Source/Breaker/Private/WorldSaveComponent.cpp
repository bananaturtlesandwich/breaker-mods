#include "WorldSaveComponent.h"

UWorldSaveComponent::UWorldSaveComponent() {
}

void UWorldSaveComponent::SetShouldUseSavedWorld(bool Should) {
}

void UWorldSaveComponent::SetServerWorldReceived(bool IsReceived) {
}

void UWorldSaveComponent::SaveLocalWorld(const UObject* WorldContextObject, bool bForceSave) {
}

void UWorldSaveComponent::ResetLocalWorldState(const UObject* WorldContextObject) {
}

void UWorldSaveComponent::ReceiveServerWorld(FPangaeaWorldState ServerWorldState) {
}

void UWorldSaveComponent::LoadLocalWorld(const UObject* WorldContextObject) {
}

bool UWorldSaveComponent::IsUsingSavedWorldState(const UObject* WorldContextObject) {
    return false;
}

bool UWorldSaveComponent::GetServerWorldReceived() {
    return false;
}


