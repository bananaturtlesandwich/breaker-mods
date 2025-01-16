#pragma once
#include "CoreMinimal.h"
#include "AnimNotifies/AnimNotify_PlayMontageNotify.h"
#include "AnimNotify_PlayMontageNotifyWindowExtended.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_PlayMontageNotifyWindowExtended : public UAnimNotify_PlayMontageNotifyWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBranchPointNotify;
    
    UAnimNotify_PlayMontageNotifyWindowExtended();

};

