#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BTTask_DescriptionNode.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTTask_DescriptionNode : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StaticDescriptionInfoShare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSucceed;
    
public:
    UBTTask_DescriptionNode();

};

