#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTT_AIQuery_EnvironmentQuerySystem.generated.h"

UCLASS(Blueprintable)
class UBTT_AIQuery_EnvironmentQuerySystem : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSParametrizedRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EQSQueryResultBlackboardSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EQSResultSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlackboardKeyForEQSQuery;
    
public:
    UBTT_AIQuery_EnvironmentQuerySystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float GetInvalidEQSServerTimeEntreeSeconds();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 GetInvalidEQSRequestLinkID();
    
};

