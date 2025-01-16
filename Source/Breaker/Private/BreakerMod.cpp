#include "BreakerMod.h"
#include "Net/UnrealNetwork.h"

ABreakerMod::ABreakerMod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EquipmentComponent = NULL;
    this->ModStackSize = 1;
    this->TriggerState = EModTriggerState::Dormant;
    this->ModMeter = -1.00f;
    this->bIsApplied = false;
}

void ABreakerMod::TriggerSpecializationChangedDelegates() {
}

void ABreakerMod::TriggerInstant() {
}

void ABreakerMod::TriggerAssociatedIconsChangedDelegates() {
}

void ABreakerMod::SetTriggerState(EModTriggerState NewState) {
}

void ABreakerMod::SetModMeter(float NewValue) {
}

void ABreakerMod::RetireModOnCMChar_Implementation(ACMCharBase* CMChar) {
}

void ABreakerMod::RemoveModFromWeapon_Implementation(ABreakerWeaponProp* Weapon) {
}

void ABreakerMod::RemoveModFromSyCom_Implementation(ASyCom* SyCom) {
}

void ABreakerMod::RemoveModFromPawn_Implementation(ABreakerPawn* Player) {
}

void ABreakerMod::RemoveModFromCMChar_Implementation(ACMCharBase* CMChar) {
}

void ABreakerMod::ReInitModOnCMChar_Implementation(ACMCharBase* CMChar) {
}

void ABreakerMod::OnRep_SpecializationInfo() {
}

void ABreakerMod::OnRep_ModTag() {
}

void ABreakerMod::OnRep_ModStackSize() {
}

void ABreakerMod::OnRep_IsApplied() {
}

void ABreakerMod::OnRep_AssociatedIcons() {
}














void ABreakerMod::OnComputeModifiedDamage_Implementation(AActor* Attacker, AActor* Victim, const FBreakerDamage& InDamage, FBreakerDamage& OutDamage) {
}


bool ABreakerMod::ModMeterHasValue() const {
    return false;
}

void ABreakerMod::Internal_OnActivate(ABreakerPawn* Player) {
}

void ABreakerMod::IncreaseStackByOne() {
}

FModSpecializationInfo ABreakerMod::GetSpecializationInfo() const {
    return FModSpecializationInfo{};
}

float ABreakerMod::GetSecondaryModValue() const {
    return 0.0f;
}

float ABreakerMod::GetModValue() const {
    return 0.0f;
}

float ABreakerMod::GetModDuration() const {
    return 0.0f;
}

EEquipmentType ABreakerMod::GetEquipmentSlot() const {
    return EEquipmentType::Amp;
}

float ABreakerMod::GetCurrentValue_Implementation(bool& IsValuePercent) {
    return 0.0f;
}

ABreakerPawn* ABreakerMod::GetBreakerPawn() const {
    return NULL;
}

FModSpecializationInfo ABreakerMod::ConstructSpecializationForNewMod_Implementation(AActor* TargetActor, int32 StackLevel) {
    return FModSpecializationInfo{};
}

bool ABreakerMod::CanActivate_Implementation() const {
    return false;
}

void ABreakerMod::ApplyModToWeapon_Implementation(ABreakerWeaponProp* Weapon) {
}

void ABreakerMod::ApplyModToSyCom_Implementation(ASyCom* SyCom) {
}

void ABreakerMod::ApplyModToPawn_Implementation(ABreakerPawn* Player) {
}

void ABreakerMod::ApplyModToCMChar_Implementation(ACMCharBase* CMChar) {
}

void ABreakerMod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABreakerMod, ModTag);
    DOREPLIFETIME(ABreakerMod, ModStackSize);
    DOREPLIFETIME(ABreakerMod, AssociatedIcons);
    DOREPLIFETIME(ABreakerMod, SpecializationInfo);
    DOREPLIFETIME(ABreakerMod, bIsApplied);
}


