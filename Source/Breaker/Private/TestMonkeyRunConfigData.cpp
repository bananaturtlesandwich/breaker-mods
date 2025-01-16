#include "TestMonkeyRunConfigData.h"

FTestMonkeyRunConfigData::FTestMonkeyRunConfigData() {
    this->bExecute = false;
    this->TargetExecutable = EUnrealExePath::ThisInstance;
    this->bCollectStats = false;
    this->bCollectNetStats = false;
    this->bCollectFuncStats = false;
    this->bAutoAcceptWidgets = false;
    this->bAutoPlayTheGame = false;
    this->bAutoHostCreate = false;
    this->bAutoClientJoin = false;
    this->bCloseGameOnFinish = false;
    this->GameExecutionTimeout = 0.00f;
}

