#include "TestMonkeySubsystem.h"

UTestMonkeySubsystem::UTestMonkeySubsystem() {
    this->SessionToken = -1;
    this->ActiveConfig = NULL;
}

bool UTestMonkeySubsystem::TickCompanionGames(float DeltaTime) {
    return false;
}

bool UTestMonkeySubsystem::Tick(float DeltaTime) {
    return false;
}

void UTestMonkeySubsystem::StopLocalSession() {
}

void UTestMonkeySubsystem::StartSessionWithConfig(UTestMonkeyRunConfig* RunConfig) {
}

void UTestMonkeySubsystem::ProcessCompanionGames(bool bCleanupDeadOnes) {
}

void UTestMonkeySubsystem::OnWorldDestroyed(UWorld* TheWorld) {
}

void UTestMonkeySubsystem::OnEndPIE(const bool bIsSimulating) {
}

UTestMonkeyCompanionGameInstance* UTestMonkeySubsystem::LaunchCompanionGameInstance(UTestMonkeyRunConfig* RunConfig) {
    return NULL;
}

UTestMonkeyRunConfig* UTestMonkeySubsystem::GetActiveConfig() const {
    return NULL;
}


