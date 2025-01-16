#pragma once
#include "CoreMinimal.h"
#include "CompanionGameInstanceEventDelegate.generated.h"

class UTestMonkeyCompanionGameInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompanionGameInstanceEvent, UTestMonkeyCompanionGameInstance*, GameInstance);

