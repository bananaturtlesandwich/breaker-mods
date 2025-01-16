#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerDamage.h"
#include "BreakerPawnComponentInterface.h"
#include "PlayerDamagePipeline.generated.h"

class AActor;
class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UPlayerDamagePipeline : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfRecoilAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UPlayerDamagePipeline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void VisualizeDamageFromServer(AActor* Target, AActor* Attacker, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendDamageToServerForProcessing(AActor* Target, AActor* Attacker, const FBreakerDamage& Damage, const ABreakerPawn* CallingPlayer);
    

    // Fix for true pure virtual functions not being implemented
};

