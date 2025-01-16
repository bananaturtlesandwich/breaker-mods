#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Visibility.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UAnimNotify_Visibility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActorIsVisible;
    
    UAnimNotify_Visibility();

};

