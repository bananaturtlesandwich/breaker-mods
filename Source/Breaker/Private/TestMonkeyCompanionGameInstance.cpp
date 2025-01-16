#include "TestMonkeyCompanionGameInstance.h"

UTestMonkeyCompanionGameInstance::UTestMonkeyCompanionGameInstance() {
    this->bHintSaveWindowPosition = false;
    this->SessionToken = -1;
    this->RunConfig = NULL;
}

void UTestMonkeyCompanionGameInstance::StartProcess() {
}

void UTestMonkeyCompanionGameInstance::KillProcess() {
}

bool UTestMonkeyCompanionGameInstance::IsValid() const {
    return false;
}

bool UTestMonkeyCompanionGameInstance::IsRunning() {
    return false;
}

int32 UTestMonkeyCompanionGameInstance::GetReturnCode() {
    return 0;
}

int32 UTestMonkeyCompanionGameInstance::GetProcessId() const {
    return 0;
}


