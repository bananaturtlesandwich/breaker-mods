#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BreakerAttackReport.h"
#include "DamageGroup.h"
#include "BreakerPlayerEventListener.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerPlayerEventListener : public UActorComponent {
    GENERATED_BODY()
public:
    UBreakerPlayerEventListener(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUseKit(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStartSpecial(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerShoot(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHealthLost(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndSpecial(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnExplosion(ABreakerPawn* Player, FVector ExplosionLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled_ByAlly(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDamaged_ByAlly(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDamaged(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageGroupResolved(FDamageGroup DamageGroup);
    
};

