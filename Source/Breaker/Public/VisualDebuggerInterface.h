#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VisualDebuggerInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UVisualDebuggerInterface : public UInterface {
    GENERATED_BODY()
};

class IVisualDebuggerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetPresented(bool bPresented) PURE_VIRTUAL(SetPresented,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsPresented() const PURE_VIRTUAL(IsPresented, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetDebuggerName() const PURE_VIRTUAL(GetDebuggerName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual FString AssociatedHotKeyString() const PURE_VIRTUAL(AssociatedHotKeyString, return TEXT(""););
    
};

