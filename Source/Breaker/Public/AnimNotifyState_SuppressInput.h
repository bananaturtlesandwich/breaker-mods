#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BreakerPawnLocalInputHandler.h"
#include "AnimNotifyState_SuppressInput.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_SuppressInput : public UAnimNotifyState, public IBreakerPawnLocalInputHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockStickOnSuppress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressButtonInput;
    
    UAnimNotifyState_SuppressInput();


    // Fix for true pure virtual functions not being implemented
};

