#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AbyssKing_Meteor_AOE_Damage_EventDelegate.h"
#include "AbyssKing_Meteor_AOE_EventDelegate.h"
#include "AbyssKing_Meteor_Explode_EventDelegate.h"
#include "AbyssKing_Meteor_Explosion_Damage_EventDelegate.h"
#include "AbyssKing_Meteor_Grow_EventDelegate.h"
#include "AbyssKing_Meteor_Hover_EventDelegate.h"
#include "AbyssKing_Meteor_Travel_EventDelegate.h"
#include "AbyssKing_Meteor_VisibilityDelegate.h"
#include "GlobalEvent_AbyssKing_Meteor_State.h"
#include "GlobalEvent_AbyssKing_Meteor.generated.h"

class ABreakerPawn;
class UCameraShakeSourceComponent;
class UNiagaraComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BREAKER_API AGlobalEvent_AbyssKing_Meteor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_Visibility OnMeteorVisibilityChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Destination, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartLocation, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoundDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> IslandReferencePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GlobalEvent_AbyssKing_Meteor_State State;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_Grow_Event OnAbyssKingMeteorGrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_Hover_Event OnAbyssKingMeteorHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_Travel_Event OnAbyssKingMeteorTravel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_Explode_Event OnAbyssKingMeteorExplode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_AOE_Event OnAbyssKingMeteorAOE;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_Explosion_Damage_Event OnAbyssKingMeteorExplosionDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Meteor_AOE_Damage_Event OnAbyssKingMeteorAOEDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeteorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MeteorEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AOEEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraShakeSourceComponent* CameraShakeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlamesRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOERadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Grow_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Explosion_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAOE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABreakerPawn* LocalPlayerPawnInsideAOE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOEDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AOEDamageAmount;
    
    AGlobalEvent_AbyssKing_Meteor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Server_SetStartLocation(const FVector& Start);
    
    UFUNCTION(BlueprintCallable)
    void Server_SetDestination(const FVector& Dest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartingToRemove();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StartLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Destination();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FindTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FindIslandRefs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutAOE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInAOE();
    
};

