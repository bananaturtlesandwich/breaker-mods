#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerStateDelegate.h"
#include "BreakerTargetInRangeEventDelegate.h"
#include "CharacterMovementInputState.h"
#include "Templates/SubclassOf.h"
#include "BreakerWanderState.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerWanderState : public UActorComponent, public ICharacterMovementInputState, public IBreakerStateDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAlertRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerTargetInRangeEvent OnTargetInRange;
    
    UBreakerWanderState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName State_GetName() const;
    

    // Fix for true pure virtual functions not being implemented
};

