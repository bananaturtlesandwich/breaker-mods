#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "OnSimProxyNumberHealthKitsChangedDelegate.h"
#include "PlayerStateInfo.h"
#include "BreakerPlayerState.generated.h"

class AActor;
class UDataTable;
class UPlayerCharacterInfo;

UCLASS(Blueprintable)
class BREAKER_API ABreakerPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerInfo, meta=(AllowPrivateAccess=true))
    FPlayerStateInfo PlayerStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterInfoChanged, meta=(AllowPrivateAccess=true))
    UPlayerCharacterInfo* PlayerCharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SyComTagChanged, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentSyComTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimProxyNumberOfHealthKits, meta=(AllowPrivateAccess=true))
    int32 SimProxy_NumberOfHealthKits;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSimProxyNumberHealthKitsChanged OnSimProxyNumberHealthKitsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultWeaponStanceAnimLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnforceDataTableSkinToAnimBP_Matching;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsPlayerStageReady, meta=(AllowPrivateAccess=true))
    bool bIsPlayerStageReady;
    
public:
    ABreakerPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateUnlockGearState();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerStageReady(bool bReady);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SERVER_ChangeNumberOfHealthKits(const int32 CurrentNumber);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SyComTagChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimProxyNumberOfHealthKits();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PlayerInfo(FPlayerStateInfo NewPlayerStateInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterInfoChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsPlayerStageReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNumberHealthKitsChanged(const int32 PrevNumber, const int32 CurrentNumber);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<AActor*> GetNearbyCombatants() const;
    
};

