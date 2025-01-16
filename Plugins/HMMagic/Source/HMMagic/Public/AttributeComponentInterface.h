#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AttributeComponentInterface.generated.h"

class IAttributeContainerInterface;
class UAttributeContainerInterface;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class HMMAGIC_API UAttributeComponentInterface : public UInterface {
    GENERATED_BODY()
};

class HMMAGIC_API IAttributeComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool GetAttributeComponent(TScriptInterface<IAttributeContainerInterface>& Result) PURE_VIRTUAL(GetAttributeComponent, return false;);
    
};

