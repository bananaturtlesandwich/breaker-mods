#pragma once
#include "CoreMinimal.h"
#include "BreakerScreenBase.h"
#include "PrimaryRunScreen.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UPrimaryRunScreen : public UBreakerScreenBase {
    GENERATED_BODY()
public:
    UPrimaryRunScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableSecondaryHealthBar(float Delay, float BetweenTime, float Percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayTelepadPrompt(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayMissionMessage(const FText& Header, const FText& Message, const FText& Clarification, const UTexture2D* MessageIcon, float WaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayAlert(const FText& ScreenText, const FText& HeaderText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddGameInformationMessage(const FText& Text);
    
};

