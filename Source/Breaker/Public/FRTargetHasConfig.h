#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveApplicationCondition.h"
#include "FRTargetHasConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRTargetHasConfig : public UFederalReserveApplicationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UFRTargetHasConfig();

};

