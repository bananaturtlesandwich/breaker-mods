#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerPawnComponentInterface.h"
#include "PlayerCheatCodes.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UPlayerCheatCodes : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UPlayerCheatCodes(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryTriggerCheatRefillStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatTeleport(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatRefillHealth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatApplyHealth(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatApplyDamage(int32 Damage);
    

    // Fix for true pure virtual functions not being implemented
};

