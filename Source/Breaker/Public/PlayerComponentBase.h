#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerPawnComponentInterface.h"
#include "PlayerComponentBase.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UPlayerComponentBase : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UPlayerComponentBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

