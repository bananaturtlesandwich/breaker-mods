#pragma once
#include "CoreMinimal.h"
#include "AnimNotifies/AnimNotify_PlayMontageNotify.h"
#include "AnimNotify_PlayMontageNotifyExtended.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_PlayMontageNotifyExtended : public UAnimNotify_PlayMontageNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBranchPointNotify;
    
    UAnimNotify_PlayMontageNotifyExtended();

};

