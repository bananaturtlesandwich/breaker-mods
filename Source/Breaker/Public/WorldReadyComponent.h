#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossExistsDelegate.h"
#include "ELevelState.h"
#include "OnBossReadyDelegate.h"
#include "PangaeaActorList.h"
#include "WorldReadyEventDelegate.h"
#include "WorldReadyComponent.generated.h"

class ACMCharBase;
class UObject;
class UWorldReadyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class UWorldReadyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldReadyEvent WorldReadyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldReadyEvent WorldReadyToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPangaeaActorList ReplicatedActorListForPangaea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossExists BossExists;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossReady OnBossReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWorldIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerReady;
    
    UWorldReadyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WorldReady(float LevelFadeInTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorldReady(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable)
    void PlayerSetWorldReady(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AllPlayersWorldReady();
    
    UFUNCTION(BlueprintCallable)
    void LocalRegisterBoss(ACMCharBase* Boss);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldReadyForAllPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWorldReadyComponent* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckForReplicatedActors();
    
};

