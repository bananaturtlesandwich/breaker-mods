#pragma once
#include "CoreMinimal.h"
#include "FederalReserveApplicationCondition.h"
#include "FRTargetIsSubclassOf.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRTargetIsSubclassOf : public UFederalReserveApplicationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ParentClass;
    
    UFRTargetIsSubclassOf();

};

