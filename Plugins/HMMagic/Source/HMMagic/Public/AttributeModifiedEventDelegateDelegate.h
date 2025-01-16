#pragma once
#include "CoreMinimal.h"
#include "Attribute.h"
#include "AttributeModifiedEventDelegateDelegate.generated.h"

class IAttributeContainerInterface;
class UAttributeContainerInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAttributeModifiedEventDelegate, const TScriptInterface<IAttributeContainerInterface>&, AttributeContainer, const FAttribute&, Attribute, const FAttribute&, PrevAttribute);

