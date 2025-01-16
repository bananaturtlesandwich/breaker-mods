#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MinibossComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UMinibossComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMinibossComponent(const FObjectInitializer& ObjectInitializer);

};

