#pragma once
#include "CoreMinimal.h"
#include "AkActionOnEventType.h"
#include "EAkCurveInterpolation.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "BrkAudioNotifyState.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UBrkAudioNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkActionOnEventType OnStopActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnStopFadeOutMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCurveInterpolation OnStopFadeOutCurve;
    
    UBrkAudioNotifyState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsInEditor(const UObject* WorldContextObject) const;
    
};

