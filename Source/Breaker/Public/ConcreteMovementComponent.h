#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "ConcreteMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConcreteMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UConcreteMovementComponent(const FObjectInitializer& ObjectInitializer);

};

