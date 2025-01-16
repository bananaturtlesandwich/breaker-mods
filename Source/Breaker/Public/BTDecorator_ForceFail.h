#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ForceFail.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_ForceFail : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_ForceFail();

};

