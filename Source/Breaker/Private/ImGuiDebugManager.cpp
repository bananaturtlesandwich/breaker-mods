#include "ImGuiDebugManager.h"

UImGuiDebugManager::UImGuiDebugManager() {
    this->bIsImGuiRenderingHalted = false;
}

void UImGuiDebugManager::SetBreakerImGuiHaltStatus(const bool bInHaltStatus) {
}

bool UImGuiDebugManager::IsGameplayManagerLoaded(const UWorld* worldInstance) const {
    return false;
}

bool UImGuiDebugManager::IsGameplayDebugManagerEnabled(const UWorld* worldInstance) const {
    return false;
}

AActor* UImGuiDebugManager::IsGameplayDebuggerEnabledAndHasTarget(const UWorld* worldInstance) const {
    return NULL;
}

APlayerController* UImGuiDebugManager::GetLocalPlayerController(const UWorld* worldInstance) const {
    return NULL;
}

UImGuiDebugManager* UImGuiDebugManager::GetImGuiDebugManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UImGuiDebugManager::GetBreakerImGuiHaltStatus() const {
    return false;
}

AActor* UImGuiDebugManager::EnableGameplayDebuggerWithReplicatedTarget(const UWorld* worldInstance, const AActor* inDebuggerTarget) const {
    return NULL;
}

bool UImGuiDebugManager::EnableGameplayDebugger(const UWorld* worldInstance) const {
    return false;
}


