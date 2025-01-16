#include "TestMonkeyRunConfig.h"

UTestMonkeyRunConfig::UTestMonkeyRunConfig() {
    this->bExecute = false;
    this->TargetExecutable = EUnrealExePath::ThisInstance;
    this->bCollectStats = true;
    this->bCollectNetStats = true;
    this->bCollectFuncStats = false;
    this->bAutoAcceptWidgets = true;
    this->bAutoPlayTheGame = true;
    this->bAutoHostCreate = false;
    this->bAutoClientJoin = false;
    this->bCloseGameOnFinish = false;
    this->GameExecutionTimeout = 0.00f;
}

void UTestMonkeyRunConfig::SetFromConfigData(FTestMonkeyRunConfigData Data) {
}

void UTestMonkeyRunConfig::GenerateNetworkEmulationCommands(const FSimpleNetEmulationSettings& NetSettings, bool bForConsole, TArray<FString>& OutCommands) {
}


