#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveApplicationCondition.h"
#include "FRHasLocationTags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRHasLocationTags : public UFederalReserveApplicationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UFRHasLocationTags();

};

