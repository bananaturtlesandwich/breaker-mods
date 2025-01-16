#include "BreakerEquipmentComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerEquipmentComponent::UBreakerEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActiveAnimationLock = false;
    this->InputActivationType = EInputActivationType::OnPressed;
    this->CachedBreakerPawnOwner = NULL;
    this->CachedWeaponPropOwner = NULL;
    this->CachedHolobyteOwner = NULL;
}

bool UBreakerEquipmentComponent::UsesAimArc() const {
    return false;
}

void UBreakerEquipmentComponent::StartCustomActionCooldownTimer() {
}

void UBreakerEquipmentComponent::SetStatusEffectInfo(FGameplayTag EffectTag, const int32 EffectLevel, FGameplayTag EffectModTag, const int32 OverrideStackCount) {
}









void UBreakerEquipmentComponent::OnCustomActionCooldownTimerEnd() {
}



void UBreakerEquipmentComponent::ModifyRemainingCustomActionCooldownTime(const float Scalar, const float Constant) {
}

bool UBreakerEquipmentComponent::IsGearActive() const {
    return false;
}

ABreakerWeaponProp* UBreakerEquipmentComponent::GetWeaponProp() const {
    return NULL;
}

FGameplayTag UBreakerEquipmentComponent::GetStatusEffectTag() const {
    return FGameplayTag{};
}

ABreakerMod* UBreakerEquipmentComponent::GetHolobyte() const {
    return NULL;
}

FGenericGearInfo UBreakerEquipmentComponent::GetGenericGearInfo() const {
    return FGenericGearInfo{};
}

ECharacterEquipmentSlot UBreakerEquipmentComponent::GetEquippedInSlot() const {
    return ECharacterEquipmentSlot::None;
}

EEquipmentType UBreakerEquipmentComponent::GetEquipmentType() const {
    return EEquipmentType::Amp;
}

float UBreakerEquipmentComponent::GetCustomActionCooldownTimeRemainingRatio() const {
    return 0.0f;
}

ABreakerPawn* UBreakerEquipmentComponent::GetBreakerPawn() const {
    return NULL;
}

void UBreakerEquipmentComponent::DEBUG_OverrideAffixMods(const TMap<FGameplayTag, int32>& NewAffixMods) {
}

bool UBreakerEquipmentComponent::CanEquip_Implementation(const ECombatActionRoute ActionRoute) const {
    return false;
}

void UBreakerEquipmentComponent::CancelCustomActionCooldown() {
}

void UBreakerEquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerEquipmentComponent, SyncedGearInfo);
}


