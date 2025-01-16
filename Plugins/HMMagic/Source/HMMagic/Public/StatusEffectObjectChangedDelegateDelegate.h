#pragma once
#include "CoreMinimal.h"
#include "StatusEffectObjectChangedDelegateDelegate.generated.h"

class IStatusEffectContainerInterface;
class UStatusEffectContainerInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatusEffectObjectChangedDelegate, TScriptInterface<IStatusEffectContainerInterface>, EffectContainer);

