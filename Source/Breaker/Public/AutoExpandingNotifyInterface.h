#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AutoExpandingNotifyEntry.h"
#include "AutoExpandingNotifyInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class BREAKER_API UAutoExpandingNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class BREAKER_API IAutoExpandingNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AutoNotify_RequestRows(TArray<FAutoExpandingNotifyEntry>& OutRows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AutoNotify_OnRowsExpanded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* AutoNotify_GetParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AutoNotify_ConfigureNotify(FAutoExpandingNotifyEntry Entry, UObject* NotifyObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AutoNotify_CanExpand(bool& bShouldExpand) const;
    
};

