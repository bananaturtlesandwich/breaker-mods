#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_EntryLimit.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_EntryLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryCountLimit;
    
    UBTDecorator_EntryLimit();

};

