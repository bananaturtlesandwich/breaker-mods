#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AutoExpandingNotifyInterface.h"
#include "BreakerPawnLocalInputHandler.h"
#include "ECombatActionRoute.h"
#include "AnimNotifyState_InputCancel.generated.h"

class UAnimNotifyState_InputCancel;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_InputCancel : public UAnimNotifyState, public IBreakerPawnLocalInputHandler, public IAutoExpandingNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnAnyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECombatActionRoute> SpecificActionCancels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExpand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimNotifyState_InputCancel* ParentNotify;
    
    UAnimNotifyState_InputCancel();


    // Fix for true pure virtual functions not being implemented
};

