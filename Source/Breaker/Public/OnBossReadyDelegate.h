#pragma once
#include "CoreMinimal.h"
#include "OnBossReadyDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossReady, ACMCharBase*, Boss);

