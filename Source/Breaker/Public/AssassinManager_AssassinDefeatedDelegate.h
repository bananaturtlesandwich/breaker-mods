#pragma once
#include "CoreMinimal.h"
#include "AssassinManager_AssassinDefeatedDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAssassinManager_AssassinDefeated, ACMCharBase*, Enemy);

