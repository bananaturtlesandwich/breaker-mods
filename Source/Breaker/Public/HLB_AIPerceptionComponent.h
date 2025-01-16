#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "HLB_AIPerceptionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UHLB_AIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UHLB_AIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

};

