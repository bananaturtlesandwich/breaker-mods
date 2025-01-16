#pragma once
#include "CoreMinimal.h"
#include "OnHyperLevelSetupSetDelegate.generated.h"

class AHyperLevelSetup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHyperLevelSetupSet, AHyperLevelSetup*, HyperLevelSetup);

