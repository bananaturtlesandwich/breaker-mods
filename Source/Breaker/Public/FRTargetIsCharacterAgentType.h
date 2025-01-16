#pragma once
#include "CoreMinimal.h"
#include "ECharacterAgentType.h"
#include "FederalReserveApplicationCondition.h"
#include "FRTargetIsCharacterAgentType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRTargetIsCharacterAgentType : public UFederalReserveApplicationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECharacterAgentType> AgentTypes;
    
    UFRTargetIsCharacterAgentType();

};

