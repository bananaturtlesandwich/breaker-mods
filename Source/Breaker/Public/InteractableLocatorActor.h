#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableLocatorActor.generated.h"

class UInteractableLocatorComponent;
class UInteractableSet;

UCLASS(Blueprintable)
class BREAKER_API AInteractableLocatorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractableSet* InteractableSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableLocatorComponent* Locator;
    
public:
    AInteractableLocatorActor(const FObjectInitializer& ObjectInitializer);

};

