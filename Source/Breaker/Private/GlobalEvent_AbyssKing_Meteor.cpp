#include "GlobalEvent_AbyssKing_Meteor.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

AGlobalEvent_AbyssKing_Meteor::AGlobalEvent_AbyssKing_Meteor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bFoundDestination = false;
    this->RemoveTimer = 0.00f;
    this->RemoveTime = 10.00f;
    this->State = GlobalEvent_AbyssKing_Meteor_State::AbyssKing_Meteor_State_None;
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->MeteorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeteorMesh"));
    this->UseMesh = false;
    this->MeteorEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MeteorEffect"));
    this->AOEEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AOEEffect"));
    this->ExplosionEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ExplosionEffect"));
    this->CameraShakeSource = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("CameraShake"));
    this->MeteorRadius = 8.00f;
    this->ExplosionRadius = 8.00f;
    this->FlamesRadius = 8.00f;
    this->AOERadius = 4000.00f;
    this->Timer = 0.00f;
    this->TimerTotal = 0.00f;
    this->Grow_Time = 2.00f;
    this->Explosion_Time = 1.00f;
    this->bFire = false;
    this->Speed = 100000.00f;
    this->ExplosionDamageAmount = 10;
    this->bUseAOE = true;
    this->LocalPlayerPawnInsideAOE = NULL;
    this->AOEDamageTime = 1.00f;
    this->AOEDamageAmount = 1;
    this->AOEEffect->SetupAttachment(RootComponent);
    this->CameraShakeSource->SetupAttachment(RootComponent);
    this->ExplosionEffect->SetupAttachment(RootComponent);
    this->MeteorEffect->SetupAttachment(RootComponent);
    this->MeteorMesh->SetupAttachment(RootComponent);
}

void AGlobalEvent_AbyssKing_Meteor::Server_SetStartLocation(const FVector& Start) {
}

void AGlobalEvent_AbyssKing_Meteor::Server_SetDestination(const FVector& Dest) {
}


void AGlobalEvent_AbyssKing_Meteor::OnRep_StartLocation() {
}

void AGlobalEvent_AbyssKing_Meteor::OnRep_Destination() {
}

bool AGlobalEvent_AbyssKing_Meteor::IsRemoving() const {
    return false;
}

void AGlobalEvent_AbyssKing_Meteor::FindTarget_Implementation() {
}

void AGlobalEvent_AbyssKing_Meteor::FindIslandRefs_Implementation() {
}



void AGlobalEvent_AbyssKing_Meteor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGlobalEvent_AbyssKing_Meteor, Destination);
    DOREPLIFETIME(AGlobalEvent_AbyssKing_Meteor, StartLocation);
    DOREPLIFETIME(AGlobalEvent_AbyssKing_Meteor, bFire);
}


