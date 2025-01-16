#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveApplicationCondition.h"
#include "FRTargetIsObjectType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRTargetIsObjectType : public UFederalReserveApplicationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DesiredObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UFRTargetIsObjectType();

};

