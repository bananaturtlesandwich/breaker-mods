#pragma once
#include "CoreMinimal.h"
#include "CMCtrlBase.h"
#include "MinibossAIController.generated.h"

UCLASS(Blueprintable)
class BREAKER_API AMinibossAIController : public ACMCtrlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    AMinibossAIController(const FObjectInitializer& ObjectInitializer);

};

