#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerEnemyListener.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerEnemyListener : public UActorComponent {
    GENERATED_BODY()
public:
    UBreakerEnemyListener(const FObjectInitializer& ObjectInitializer);

};

