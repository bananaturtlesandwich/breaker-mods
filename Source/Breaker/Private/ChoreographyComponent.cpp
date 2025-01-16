#include "ChoreographyComponent.h"
#include "Net/UnrealNetwork.h"

UChoreographyComponent::UChoreographyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlly = false;
    this->LeashRange = 4200.00f;
    this->HomeZoneLeashingRadius = 2000.00f;
    this->MaxWanderRangeCm = 2600.00f;
    this->bAdjustAnchorPointToAggroLocation = true;
    this->ActiveAttackChannel = EAttackChannel::DefaultAttack;
    this->CurrentCombatPriority = 1000.00f;
    this->CombatAttackData.AddDefaulted(7);
    this->HintRange = 0.00f;
    this->HintScore = 0.00f;
    this->bNeedsChoreographedPosition = true;
    this->PositioningPriority = 0;
    this->bHasLineOfSightToTarget = false;
    this->PositionRank = 0;
    this->NumAspiringAttackers = 0;
    this->TargetProximityPathRequestThreshold = 800.00f;
    this->ExclusionZone = 0;
    this->ActiveAdvantageIndex = -1;
    this->LastActiveAvantageIndex = -1;
    this->PenaltyForCrossingPlayerTargetPersonalSpaceOverride = -1.00f;
    this->bIsAllowedPositionSwappingForPositionAssignments = true;
    this->AggroRangeCm = 3800.00f;
    this->bPropogateInitialChoreographerDataOnBlackboardInitFinish = false;
    this->bCanStrafeXYHorizontalPlane = false;
    this->bCanStrafeXYVerticalPlane = false;
    this->CombatPositionSpacingCustomCm = -1.00f;
    this->bIsLeashing = false;
    this->bIsUsingAdvantage = false;
    this->bIsAssassin = false;
    this->bIsSpawnedMinion = false;
    this->bIsSpawnedMinionRetiredToPool = false;
    this->TotalSuspends = 0;
    this->bUpdateBlackboardPostInit = true;
    this->AudioRawPriorityValue = 0;
    this->bDebugOwnerIsInternallySuspended = false;
}

bool UChoreographyComponent::UpdateWanderRangeDataForBlackboard(const UBlackboardComponent* BlackboardComp) {
    return false;
}

bool UChoreographyComponent::UpdateWanderLocationDataForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector wanderLocation) {
    return false;
}

bool UChoreographyComponent::UpdatePointOfInterestLocationForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector poiLocation) {
    return false;
}

bool UChoreographyComponent::UpdatePointOfInterestActorForBlackboard(const UBlackboardComponent* BlackboardComp, const AActor* poiActor) {
    return false;
}

bool UChoreographyComponent::UpdateNoiseHeardSourceLocationForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector noiseHeardWorldLocation) {
    return false;
}

bool UChoreographyComponent::UpdateNoiseHeardSourceActorForBlackboard(const UBlackboardComponent* BlackboardComp, const AActor* noiseSourceActor) {
    return false;
}

bool UChoreographyComponent::UpdateNoiseHeardSelfLocationForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector selfLocationDuringNoiseDetection) {
    return false;
}

bool UChoreographyComponent::UpdateNoiseCheckAlertedLocation(const UBlackboardComponent* BlackboardComp, const FVector alertNoiseWorldLocation) {
    return false;
}

bool UChoreographyComponent::UpdateLeashRangeDataForBlackboard(const UBlackboardComponent* BlackboardComp) {
    return false;
}

bool UChoreographyComponent::UpdateLeashAnchorPointDataForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector updatedLeashWorldLocation) {
    return false;
}

bool UChoreographyComponent::UpdateLastAggroLocationDataForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector updatedAggroLocation, bool bUpdateLeashAnchorPointWithAggroLocation) {
    return false;
}

bool UChoreographyComponent::UpdateFocusTargetDataForBlackboard(const UBlackboardComponent* BlackboardComp) {
    return false;
}

bool UChoreographyComponent::UpdateFocusTargetData() {
    return false;
}

bool UChoreographyComponent::UpdateAIChoreographerDataForBlackboardWithAttackChannel(const EAttackChannel attackChannel) {
    return false;
}

bool UChoreographyComponent::UpdateAIChoreographerDataForBlackboard() {
    return false;
}

bool UChoreographyComponent::UpdateAdvantageDataForBlackboard(const UBlackboardComponent* BlackboardComp) {
    return false;
}

bool UChoreographyComponent::UpdateAbilityTypeRestrictionMetaData(float& out_MinDistanceCm, float& out_MaxdistanceCm, float minDistancePaddingCoefficientCm, float maxDistanceCoefficientCm) {
    return false;
}

void UChoreographyComponent::Unregister() {
}

bool UChoreographyComponent::TrySuspendLogic(const FString& reasonPaperTrail) {
    return false;
}

bool UChoreographyComponent::TryResumeLogic(const FString& reasonPaperTrail) {
    return false;
}

void UChoreographyComponent::SynchronizeSuspendStates() {
}

void UChoreographyComponent::SetTargetActor(const AActor* nextTarget, bool bUpdateBlackboard) {
}

void UChoreographyComponent::SetIsUsingAdvantageStatus(const bool bInUsingAdvantageStatus, const int32 inAdvantageIndex, bool bUpdateBlackboard) {
}

void UChoreographyComponent::SetIsLeashingStatus(const bool bIsLeashingStatus, bool bUpdateBlackboard) {
}

void UChoreographyComponent::SetCurrentRawAudioPriorityValue(const int32 InNewValue) {
}

void UChoreographyComponent::RevertHolobyteCooldownModifications() {
}

void UChoreographyComponent::Reset() {
}

void UChoreographyComponent::Register() {
}









void UChoreographyComponent::OnTargetActorChanged(const AActor* nextTarget, const AActor* previousTarget) {
}

void UChoreographyComponent::OnRep_SuspendState() {
}

void UChoreographyComponent::OnAttackRequestDenied(UChoreographyComponent* choreographerCompDenied, EAttackChannel attackChannel, EChoreographerAttackType attackType, float serverTimeSeconds) {
}

void UChoreographyComponent::OnAttackRequestAccepted(UChoreographyComponent* choreographerCompDenied, EAttackChannel attackChannel, EChoreographerAttackType attackType, float serverTimeSeconds) {
}

void UChoreographyComponent::OnAdvantageStart(const AADA* advantageHyperFab, const int32 advantageIndex) {
}

void UChoreographyComponent::OnAdvantageEnd(const int32 previousActiveIndex) {
}

void UChoreographyComponent::OnADAAIAdvantageUpdated(AActor* inActorUpdated, FAIStimulus inStimulus) {
}

bool UChoreographyComponent::IsUsingAdvantage() const {
    return false;
}

bool UChoreographyComponent::IsLogicSuspended(bool bIgnoreTrackedSuspends) const {
    return false;
}

bool UChoreographyComponent::IsLeashingAllowed() const {
    return false;
}

bool UChoreographyComponent::IsLeashing() const {
    return false;
}

bool UChoreographyComponent::IsCustomCombatSpacingInUse() const {
    return false;
}

bool UChoreographyComponent::IsAttackDataValid(const FAICombatAttackData& attackData) const {
    return false;
}

bool UChoreographyComponent::IsAllowedPositionSwappingForPositionAssignments() const {
    return false;
}

bool UChoreographyComponent::IsAlertToNoise() const {
    return false;
}

void UChoreographyComponent::InitAtLocation() {
}

bool UChoreographyComponent::HasDiscoveredAvantageArea(const AADA* inPotentialAdvantageMatchedADA) const {
    return false;
}

bool UChoreographyComponent::HasCombatAbilityRestrictions(const FAICombatAttackData& combatAbilityData) const {
    return false;
}

bool UChoreographyComponent::HasAnyAbilityRestrictions() const {
    return false;
}

bool UChoreographyComponent::HasAbilityTypeCleanShotRestriction(const EChoreographerAttackType inAbilityAttackType, bool bHasMeleeRestriction, bool bHasRangedRestriction) const {
    return false;
}

int32 UChoreographyComponent::HasAbilityRestrictionFlagsForType(const EAIAbilityRestriction inAbilityRestrictionCheck, const EChoreographerAttackType inAbilityAttackType) const {
    return 0;
}

FBlackboardKeySelector UChoreographyComponent::GetWanderMaxRangeSelector() const {
    return FBlackboardKeySelector{};
}

FBlackboardKeySelector UChoreographyComponent::GetWanderAnchorPointSelector() const {
    return FBlackboardKeySelector{};
}

bool UChoreographyComponent::GetMostRecentAttackData(FRecentAttackResult& out_RecentAttackData) const {
    return false;
}

FBlackboardKeySelector UChoreographyComponent::GetLeashRangeSelector() const {
    return FBlackboardKeySelector{};
}

FBlackboardKeySelector UChoreographyComponent::GetLeashAnchorPointSelector() const {
    return FBlackboardKeySelector{};
}

FBlackboardKeySelector UChoreographyComponent::GetLastAggroLocationSelector() const {
    return FBlackboardKeySelector{};
}

float UChoreographyComponent::GetHomeZoneLeashingRadius() const {
    return 0.0f;
}

FAICombatAttackData UChoreographyComponent::GetDefaultAttackCombatData() {
    return FAICombatAttackData{};
}

float UChoreographyComponent::GetCustomCombatSpacing() const {
    return 0.0f;
}

int32 UChoreographyComponent::GetCurrenRawAudioSystemPriorityValue_Implementation() {
    return 0;
}

float UChoreographyComponent::GetCombatPriority() const {
    return 0.0f;
}

bool UChoreographyComponent::GetCanStrafeXYVerticalPlane() const {
    return false;
}

bool UChoreographyComponent::GetCanStrafeXYHorizontalPlane() const {
    return false;
}

ABreakerGameModeBase* UChoreographyComponent::GetBreakerGameModeBase() {
    return NULL;
}

FAICombatAttackData UChoreographyComponent::GetAttackDataForChannel(const EAttackChannel attackChannel) {
    return FAICombatAttackData{};
}

float UChoreographyComponent::GetAggroRange() const {
    return 0.0f;
}

FAICombatAttackData UChoreographyComponent::GetActiveAttackCombatData() {
    return FAICombatAttackData{};
}

EAIAbilityRestriction UChoreographyComponent::GetAbilityRestrictionFlagsForAbility(const EAttackChannel inAttackChannel) const {
    return EAIAbilityRestriction::ZeroBitMarker;
}

AActor* UChoreographyComponent::FindAssassinTarget(ACMCharBase* inAssassinBaseCMChar) {
    return NULL;
}

bool UChoreographyComponent::DoAnyAttacksRequireLOS() const {
    return false;
}

void UChoreographyComponent::DebugDrawAIWandering(const float DeltaSeconds) const {
}

void UChoreographyComponent::DebugCheckInternalSuspendState() {
}

void UChoreographyComponent::ClearLogicSuspends() {
}

void UChoreographyComponent::ClearBlackboardCachedNoiseStimuliData() {
}

void UChoreographyComponent::CacheSpawnLocationToBlackboard() {
}

void UChoreographyComponent::CacheAILastRestrictionPrevention(const EAttackChannel inAttackSlot, const EChoreographerAttackType inTypeRestriction, const EAIAbilityRestriction inLastFailureFlags, const float inAngleFailureResult, const AActor* inTarget, const float inServerTimeSeconds, const float inMaxServerSecondsDifForUsage, const bool bInFailedVerticality) {
}

void UChoreographyComponent::ApplyHolobyteCooldownModifications(const float CooldownModification) {
}

void UChoreographyComponent::AddRecentAttackData(FRecentAttackResult& recentAttackData) {
}

void UChoreographyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChoreographyComponent, bAlly);
    DOREPLIFETIME(UChoreographyComponent, ActiveAttackChannel);
    DOREPLIFETIME(UChoreographyComponent, TargetActor);
    DOREPLIFETIME(UChoreographyComponent, RecentDamager);
    DOREPLIFETIME(UChoreographyComponent, CombatPosition);
    DOREPLIFETIME(UChoreographyComponent, bHasLineOfSightToTarget);
    DOREPLIFETIME(UChoreographyComponent, PositionRank);
    DOREPLIFETIME(UChoreographyComponent, ExclusionZone);
    DOREPLIFETIME(UChoreographyComponent, AggroRangeCm);
    DOREPLIFETIME(UChoreographyComponent, LogicSuspendReasons);
}


