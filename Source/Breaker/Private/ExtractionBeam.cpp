#include "ExtractionBeam.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

AExtractionBeam::AExtractionBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ExtractionBeamActivated = false;
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->BeamEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BeamEffect"));
    this->ZoneEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ZoneEffect"));
    this->LocalPlayerPawnInsideZone = NULL;
    this->ZoneRadius = 2000.00f;
    this->FailSafeSpawned = false;
    this->EnemyWaveIndex = -1;
    this->EnemyWaveIndexLast = -1;
    this->EnemyWaveTimer = -1.00f;
    this->EnemyWaveKillPoints = 0;
    this->EnemyWaveKillPointsNeeded = -1;
    this->TotalEnemyKillPointsSpawned = 0;
    this->TotalEnemyKillPoints = 0;
    this->EnemyWaveDistanceMin = 2000.00f;
    this->EnemyWaveDistanceMax = 3000.00f;
    this->EnemyWaveDespawnDistance = 30000.00f;
    this->ExtractionStartPoint = false;
    this->InitialEnemySpawnDelay = 3.00f;
    this->InitialEnemySpawnDelayTimer = 0.00f;
    this->RequireKillingAllRemainingEnemiesOnLastWave = true;
    this->BeamEffect->SetupAttachment(RootComponent);
    this->ZoneEffect->SetupAttachment(RootComponent);
}

void AExtractionBeam::UpdateThisToBeTheLastTriggeredBeam() {
}

void AExtractionBeam::OnUseAsExtractionStartPoint_Implementation() {
}


void AExtractionBeam::OnRep_ExtractionStartPoint() {
}

void AExtractionBeam::OnRep_ExtractionBeamActivated() {
}

void AExtractionBeam::OnExtractionBeamActivated_Implementation() {
}

void AExtractionBeam::ActivateExtractionBeam() {
}

void AExtractionBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExtractionBeam, ExtractionBeamActivated);
    DOREPLIFETIME(AExtractionBeam, EnemyWaveIndex);
    DOREPLIFETIME(AExtractionBeam, EnemyWaveIndexLast);
    DOREPLIFETIME(AExtractionBeam, EnemyWaveKillPoints);
    DOREPLIFETIME(AExtractionBeam, EnemyWaveKillPointsNeeded);
    DOREPLIFETIME(AExtractionBeam, ExtractionStartPoint);
}


