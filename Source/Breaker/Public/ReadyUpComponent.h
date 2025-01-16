#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELevelState.h"
#include "PlayersReadyEventDelegate.h"
#include "PlayersReadyEventWithActorDelegate.h"
#include "PlayersReadyEventWithIntDelegate.h"
#include "PlayersReadyEventWithIntIntDelegate.h"
#include "PlayersReadyEventWithStringIntDelegate.h"
#include "ReadyUpComponent.generated.h"

class AActor;
class UObject;
class UReadyUpComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class UReadyUpComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEventWithStringInt ActivateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEventWithInt BeginCountdownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEventWithActor ExecuteTransitionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEvent CancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEventWithIntInt PlayerSetReadyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEventWithIntInt UpdatePlayersEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEventWithInt ShortCutToExecution;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersReadyEvent MoreThanHalfEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllPlayersReadyMaxCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PlayerInitiator;
    
    UReadyUpComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCountdownTime(int32 NewTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetReady();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayerSetReady(int32 PlayerId, AActor* SourceActor, const FText& Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MoreThanHalf();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ForceCancel();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ExecuteTransition();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CancelReady(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BeginCountdown(int32 CountdownOverride);
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerSetReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldBeHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActivePlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UReadyUpComponent* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceCancel(ELevelState NewLevel, ELevelState OldLevel);
    
};

