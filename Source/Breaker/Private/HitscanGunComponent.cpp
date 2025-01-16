#include "HitscanGunComponent.h"
#include "Net/UnrealNetwork.h"

UHitscanGunComponent::UHitscanGunComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoReload = true;
    this->ReloadTime = -1.00f;
    this->AmmoClipSize = -1;
    this->BatteryDrain = 1.00f;
    this->SpreadShots = 0;
    this->SpreadPower = 1.00f;
    this->BurstShots = 1;
    this->MaxDistance = 5000.00f;
    this->MinShotTime = 0.20f;
    this->TimeBetweenBurstShots = 0.03f;
    this->WideRadius = 0.00f;
    this->VerticalSpreadFlatness = 0.00f;
    this->AnimRecoil = NULL;
    this->OptionalProjectile = NULL;
    this->OverrideProjectileSpeed = -1.00f;
    this->OverrideProjectileHomingStyle = EClientProjectileHomingStyle::None;
    this->OverrideProjectileHomingAccel = -1.00f;
    this->ChainRadius = 2000.00f;
    this->bAllowDamageFalloff = true;
    this->bUsesChaining = true;
    this->bHasUnlimitedAmmo = false;
}

bool UHitscanGunComponent::TryShootPlayerWeapon(bool BurstShot) {
    return false;
}

void UHitscanGunComponent::TryShoot(FVector Origin, FVector Direction, bool bIsBurstShot, const FGameplayTag BatteryAttributeTag, const bool bUseMultiTrace, USceneComponent* HomingTarget) {
}

void UHitscanGunComponent::TryQueueSingleShot() {
}

bool UHitscanGunComponent::TryAutoReload() {
    return false;
}

void UHitscanGunComponent::TriggerRelease() {
}

void UHitscanGunComponent::TriggerPress() {
}

void UHitscanGunComponent::TickRecoil_Implementation(float DeltaTime) {
}

void UHitscanGunComponent::SetAutofireEnabled(bool bEnabled) {
}

void UHitscanGunComponent::SERVER_TryFireProjectile_Implementation(const FHitscanGunShotPacket& ShotPacket) {
}

void UHitscanGunComponent::SERVER_TriggerPress_Implementation(bool bIsPressed, const FHitscanGunRepState& OwnerRepState) {
}

bool UHitscanGunComponent::QueryAimingLocation(FVector& OutLocation, FHitResult& OutHit, FVector& MuzzleWorldLocation) {
    return false;
}

void UHitscanGunComponent::PerformRecoil_Implementation() {
}

void UHitscanGunComponent::OnROFChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UHitscanGunComponent::OnOwnerUnEquipped(ABreakerWeaponProp* Weapon) {
}

void UHitscanGunComponent::OnOwnerEquipped(ABreakerWeaponProp* Weapon) {
}

void UHitscanGunComponent::OnMaxShotRangeChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UHitscanGunComponent::OnBatteryUpdated(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UHitscanGunComponent::OnBatterySpentUpdated(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UHitscanGunComponent::OnAmmoChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UHitscanGunComponent::OnAccuracyChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UHitscanGunComponent::MULTICAST_TriggerPress_Implementation(bool bIsPressed) {
}

void UHitscanGunComponent::MULTICAST_FireProjectile_Implementation(const FHitscanGunShotPacket& ShotPacket) {
}

bool UHitscanGunComponent::IsWeaponCharging() const {
    return false;
}

bool UHitscanGunComponent::IsReloading() const {
    return false;
}

bool UHitscanGunComponent::IsReadyForShot() const {
    return false;
}

bool UHitscanGunComponent::IsAutofireEnabled() const {
    return false;
}

bool UHitscanGunComponent::HasUnlimitedAmmo() const {
    return false;
}

bool UHitscanGunComponent::HasInstantReload() const {
    return false;
}

bool UHitscanGunComponent::HasAmmo() const {
    return false;
}

void UHitscanGunComponent::HandlePlayerDamageLandedOrExpired(FBreakerDamage Damage, bool bLanded) {
}

float UHitscanGunComponent::GetTimeRemaining() const {
    return 0.0f;
}

float UHitscanGunComponent::GetReloadTime() const {
    return 0.0f;
}

float UHitscanGunComponent::GetReloadElapsedTime() const {
    return 0.0f;
}

ABreakerWeaponProp* UHitscanGunComponent::GetOwningWeapon() const {
    return NULL;
}

APawn* UHitscanGunComponent::GetOwningPawn() const {
    return NULL;
}

float UHitscanGunComponent::GetNormalizedReloadTimeRemaining() const {
    return 0.0f;
}

void UHitscanGunComponent::GetMuzzleInfo_Implementation(FVector& Location, FVector& Forward) const {
}

int32 UHitscanGunComponent::GetMaximumAmmoClipAmount() const {
    return 0;
}

int32 UHitscanGunComponent::GetMaximumAmmoAmount() const {
    return 0;
}

FVector UHitscanGunComponent::GetLastHitNormal() const {
    return FVector{};
}

FVector UHitscanGunComponent::GetLastHitLocation() const {
    return FVector{};
}

bool UHitscanGunComponent::GetIsTriggerPressed() const {
    return false;
}

EBreakerRangedFireType UHitscanGunComponent::GetFireType_Implementation() const {
    return EBreakerRangedFireType::SemiAuto;
}

float UHitscanGunComponent::GetDamageFalloffMultiplier(const float InDistance) const {
    return 0.0f;
}

float UHitscanGunComponent::GetCurrentReloadTimeRemaining() const {
    return 0.0f;
}

float UHitscanGunComponent::GetCurrentReloadTimeElapsed() const {
    return 0.0f;
}

int32 UHitscanGunComponent::GetCurrentAmmoClipAmount() const {
    return 0;
}

int32 UHitscanGunComponent::GetCurrentAmmoAmount() const {
    return 0;
}

float UHitscanGunComponent::GetCurrentAccuracyConeAngle() const {
    return 0.0f;
}

void UHitscanGunComponent::GetChargeStats(float& Min, float& Max, bool& InCriticalRange) const {
}

float UHitscanGunComponent::GetChargePercentage() const {
    return 0.0f;
}

bool UHitscanGunComponent::DetermineBulletVector_Implementation(FRandomStream& RNG, const FVector Forward, const FVector Right, int32 BulletNum, int32 TotalBullets, FVector& Result) const {
    return false;
}

bool UHitscanGunComponent::CanReload() const {
    return false;
}

void UHitscanGunComponent::BP_UpdateROF() {
}

void UHitscanGunComponent::BeginReload(const bool& bIgnoreTimer) {
}

void UHitscanGunComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitscanGunComponent, RepState);
}


