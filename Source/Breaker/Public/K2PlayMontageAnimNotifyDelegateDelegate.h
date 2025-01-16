#pragma once
#include "CoreMinimal.h"
#include "K2PlayMontageAnimNotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK2PlayMontageAnimNotifyDelegate, FName, NotifyName);

