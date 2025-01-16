#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveApplicationCondition.h"
#include "FRRolledTagContainsTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRRolledTagContainsTag : public UFederalReserveApplicationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UFRRolledTagContainsTag();

};

