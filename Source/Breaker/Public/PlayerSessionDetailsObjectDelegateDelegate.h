#pragma once
#include "CoreMinimal.h"
#include "PlayerSessionDetailsObjectDelegateDelegate.generated.h"

class UPlayerSessionDetailsObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSessionDetailsObjectDelegate, UPlayerSessionDetailsObject*, SessionDetailsObject);

