#include "EnemyAudioComponent.h"
#include "Net/UnrealNetwork.h"

UEnemyAudioComponent::UEnemyAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioData = NULL;
    this->VelocityRTPC = NULL;
    this->CachedFootstepSurface = SurfaceType2;
    this->bCanBeamAttack = false;
    this->bIsBeamActive = false;
    this->bIsSentinel = false;
    this->AudioCombatRank = 0.00f;
    this->bIsSpawned = false;
}

void UEnemyAudioComponent::StopAllEnemyAudio() const {
}

void UEnemyAudioComponent::OnSentinelShieldTargetsUpdated_Internal(TArray<AActor*> TargetActors) {
}


void UEnemyAudioComponent::OnPlayMontageNotifyEnd_Internal(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}


void UEnemyAudioComponent::OnPlayMontageNotifyBegin_Internal(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}


void UEnemyAudioComponent::OnEnemySpawned_Internal() {
}


void UEnemyAudioComponent::OnEnemyRetired_Internal() {
}



void UEnemyAudioComponent::OnEnemyCreated_Internal() {
}



void UEnemyAudioComponent::OnBeamAttackStateChanged_Internal(UBreakerBeamAttackComponent* BeamComponent, EBeamAttackState State) {
}


bool UEnemyAudioComponent::GetVoiceAudioEventContainerWithTag(FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) const {
    return false;
}

bool UEnemyAudioComponent::GetFoleyAudioEventContainerWithTag(FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) const {
    return false;
}

FName UEnemyAudioComponent::GetCurrentAI_AttackName() {
    return NAME_None;
}

TEnumAsByte<EPhysicalSurface> UEnemyAudioComponent::GetCachedFootstepSurface_Implementation() {
    return SurfaceType_Default;
}

bool UEnemyAudioComponent::GetAudioEventContainerWithTag(const TMap<FGameplayTag, FBreakerEnemyAudioEventDataContainer>& AudioEventMap, FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) {
    return false;
}

bool UEnemyAudioComponent::GetAttackAudioEventContainerWithTag(FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) const {
    return false;
}

void UEnemyAudioComponent::CacheFootstepSurface_Implementation(const TEnumAsByte<EPhysicalSurface> Surface) {
}

void UEnemyAudioComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnemyAudioComponent, CurrentAI_AttackName);
}


