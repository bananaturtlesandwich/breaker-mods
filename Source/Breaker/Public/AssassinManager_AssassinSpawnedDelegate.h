#pragma once
#include "CoreMinimal.h"
#include "AssassinManager_AssassinSpawnedDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAssassinManager_AssassinSpawned, ACMCharBase*, Enemy, bool, ShowMessage);

