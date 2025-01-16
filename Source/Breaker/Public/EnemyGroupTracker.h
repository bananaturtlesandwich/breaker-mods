#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyGroupEventDelegate.h"
#include "EnemyGroupTracker.generated.h"

class ACMCharBase;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UEnemyGroupTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupEvent LastInGroupKilled;
    
    UEnemyGroupTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGroupInfo(ACMCharBase* CMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumActorsInGroup(int32 Group);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastLastInGroupKilled(ACMCharBase* CMChar);
    
};

