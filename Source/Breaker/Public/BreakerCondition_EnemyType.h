#pragma once
#include "CoreMinimal.h"
#include "BreakerConditionBase.h"
#include "Templates/SubclassOf.h"
#include "BreakerCondition_EnemyType.generated.h"

class ACMCharBase;

UCLASS(Blueprintable, EditInlineNew)
class UBreakerCondition_EnemyType : public UBreakerConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACMCharBase> EnemyClassType;
    
public:
    UBreakerCondition_EnemyType();

};

