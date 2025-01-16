#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AutoExpandingNotifyInterface.h"
#include "AnimNotifyState_SuppressActionInterrupt.generated.h"

class UAnimNotifyState_SuppressActionInterrupt;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_SuppressActionInterrupt : public UAnimNotifyState, public IAutoExpandingNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressGearSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExpand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimNotifyState_SuppressActionInterrupt* ParentNotify;
    
    UAnimNotifyState_SuppressActionInterrupt();


    // Fix for true pure virtual functions not being implemented
};

