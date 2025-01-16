#pragma once
#include "CoreMinimal.h"
#include "BreakerDebugHUD.h"
#include "EHUDState.h"
#include "HudStateChangeCompleteDelegate.h"
#include "HudStateChangeStartingDelegate.h"
#include "RunDataResetEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "BreakerHUD.generated.h"

class ABreakerHUD;
class UBreakerScreenBase;
class UObject;
class UPointOfInterestManager;
class UTexture2D;
class UUserWidget;

UCLASS(Abstract, Blueprintable, NonTransient)
class ABreakerHUD : public ABreakerDebugHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointOfInterestManager* PointOfInterestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDState PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDState DesiredState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudStateChangeComplete StateChangeComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudStateChangeStarting StateChangeStarting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunDataResetEvent RunDataResetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHUDState, TSoftClassPtr<UBreakerScreenBase>> SoftScreenClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHUDState, TSubclassOf<UBreakerScreenBase>> ScreenClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EHUDState, UBreakerScreenBase*> ScreenReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LoadingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LevelTitleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Fade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Loading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LevelTitle;
    
    ABreakerHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateNPCPortrait(FName InkCharID, FName Emote);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLevelTitleOnScreen(const FText& LevelName, const FText& LevelSubText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowJumpUI(bool bDoShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldHideVersionInfo();
    
    UFUNCTION(BlueprintCallable)
    bool SetHUDState(EHUDState NewState, TSubclassOf<UBreakerScreenBase> OutputType, UBreakerScreenBase*& OutScreen);
    
    UFUNCTION(BlueprintCallable)
    void OverridePreviousState(EHUDState NewPreviousState);
    
    UFUNCTION(BlueprintCallable)
    bool GoToPreviousState();
    
    UFUNCTION(BlueprintCallable)
    bool GoToDefaultState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UBreakerScreenBase> GetScreenClass(EHUDState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerScreenBase* GetScreen(EHUDState State, TSubclassOf<UBreakerScreenBase> OutputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EHUDState GetDefaultState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABreakerHUD* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnableSecondaryHealthBar(float Delay, float BetweenTime, float Percentage);
    
    UFUNCTION(BlueprintCallable)
    void DisplayTelepadPrompt(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void DisplayMissionMessage(FText Header, FText Message, FText Clarification, UTexture2D* MessageIcon, float WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void DisplayAlert(FText Text, FText Header);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChangeComplete(EHUDState NewHudState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddNetworkInformationMessage(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void AddGameInformationMessage(FText Text);
    
};

