#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ECommonInputMode.h"
#include "BreakerScreenAction.h"
#include "EUIInputDeviceType.h"
#include "LatestInputDeviceTypeChangedDelegate.h"
#include "OnScreenActionExecutedDelegate.h"
#include "UIEventDelegate.h"
#include "BreakerScreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UBreakerScreenBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIEvent OnExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIEvent OnInterrupted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputMode DesiredInputMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSlateNavigation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWASDNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputDeviceType LatestInputDeviceType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLatestInputDeviceTypeChanged LatestInputDeviceTypeChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakerScreenAction> ScreenActions;
    
public:
    UBreakerScreenBase();

    UFUNCTION(BlueprintCallable)
    void StopListeningForScreenAction(const FBreakerScreenAction& ScreenAction);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningForAllScreenActions();
    
    UFUNCTION(BlueprintCallable)
    void ListenForScreenAction(const FBreakerScreenAction& ScreenAction, FOnScreenActionExecuted Callback);
    
};

