#include "BreakerFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UBreakerFunctionLibrary::UBreakerFunctionLibrary() {
}

void UBreakerFunctionLibrary::VisLogOrientedBox(UObject* WorldContextObject, FBox BoxShape, const FMatrix& Matrix, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog) {
}

void UBreakerFunctionLibrary::VisLogCylinder(UObject* WorldContextObject, const FVector Start, const FVector End, const float Radius, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog) {
}

void UBreakerFunctionLibrary::VisLogCone(UObject* WorldContextObject, FVector Origin, const FVector& Direction, const float Length, const float AngleInDegrees, const FString& Text, FLinearColor ObjectColor, float Thickness, FName LogCategory, bool bAddToMessageLog) {
}

void UBreakerFunctionLibrary::VisLogCapsule(UObject* WorldContextObject, const FVector Center, const float HalfHeight, const float Radius, const FQuat& Rotation, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog) {
}

void UBreakerFunctionLibrary::VisLogArrow(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog) {
}

void UBreakerFunctionLibrary::VisLog2dConvexPoly(UObject* WorldContextObject, const TArray<FVector>& Points, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog) {
}

FBiomeZoneInfo UBreakerFunctionLibrary::VirtualBiomeZoneInfo() {
    return FBiomeZoneInfo{};
}

bool UBreakerFunctionLibrary::Valid_EnemySpawnPreference(const FEnemySpawnPreference& Preference) {
    return false;
}

bool UBreakerFunctionLibrary::Valid_BiomeZoneInfo(const FBiomeZoneInfo& BiomeZoneInfo) {
    return false;
}

void UBreakerFunctionLibrary::UpdateCullDistanceInfo() {
}

bool UBreakerFunctionLibrary::UpdateCombatBlackboardValuesForAI(const APawn* inAIToUpdate) {
    return false;
}

bool UBreakerFunctionLibrary::UpdateBTCombatBlackboardValuesWithAttackChannel(const UBehaviorTreeComponent* ownerBehaviorTreeComponent, const EAttackChannel attackChannel) {
    return false;
}

bool UBreakerFunctionLibrary::UpdateBTComatBlackboardValues(const UBehaviorTreeComponent* ownerBehaviorTreeComponent) {
    return false;
}

bool UBreakerFunctionLibrary::TryApplyDamageToHitbox(AActor* Caller, UPrimitiveComponent* HitBox, const FBreakerDamage& Damage, bool bCheckOnlyIfCouldApply) {
    return false;
}

FVector UBreakerFunctionLibrary::TrimVector(FVector Vector, float Amount) {
    return FVector{};
}

void UBreakerFunctionLibrary::TriggerExplosionReaction(UObject* WorldContextObject, ABreakerPawn* InstigatingBreakerPawn, const FVector ExplsionOrigin) {
}

FVector UBreakerFunctionLibrary::SnapPositionToGroundWithSlope(const UObject* WorldContextObject, const FVector& position, const TArray<AActor*>& IgnoredActors, float ZOffset, float ZStartOffset, TEnumAsByte<ECollisionChannel> CollisionChannel, float& OutSlope) {
    return FVector{};
}

FVector UBreakerFunctionLibrary::SnapPositionToGround(const UObject* WorldContextObject, const FVector& position, const TArray<AActor*>& IgnoredActors, float ZOffset, float ZStartOffset) {
    return FVector{};
}

bool UBreakerFunctionLibrary::ShouldRefillAttribute(const UCharacterAttributeComponent* AttributeComponent, const FGameplayTag& AttributeTag) {
    return false;
}

bool UBreakerFunctionLibrary::ShouldModifyAttributeMax(const UCharacterAttributeComponent* AttributeComponent, const FGameplayTag& AttributeTag) {
    return false;
}

void UBreakerFunctionLibrary::ShakeCamera_WorldDirection(UObject* WorldContextObject, FVector Direction, float DurationMultiplier, float AmplitudeMultiplier) {
}

void UBreakerFunctionLibrary::ShakeCamera_ScreenDirection(UObject* WorldContextObject, FVector2D Direction, float DurationMultiplier, float AmplitudeMultiplier) {
}

void UBreakerFunctionLibrary::ShakeCamera_RandomDirection(UObject* WorldContextObject, float DurationMultiplier, float AmplitudeMultiplier) {
}

void UBreakerFunctionLibrary::ShakeCamera_Degrees(UObject* WorldContextObject, float Degrees, float DurationMultiplier, float AmplitudeMultiplier) {
}

void UBreakerFunctionLibrary::SetMeshRagdolling(USkeletalMeshComponent* SkelMesh, bool bIsRagdolling) {
}

void UBreakerFunctionLibrary::SetBpComponentScale(UObject* Asset, USCS_Node* Node, FVector Scale) {
}

void UBreakerFunctionLibrary::SetBpComponentRotation(UObject* Asset, USCS_Node* Node, FRotator Rotator) {
}

void UBreakerFunctionLibrary::SetBpComponentLocation(UObject* Asset, USCS_Node* Node, FVector Location) {
}

FVector UBreakerFunctionLibrary::ScaleVectorOnAxis(FVector Vector, FVector Axis, float Scale) {
    return FVector{};
}

FRotator UBreakerFunctionLibrary::RotationSnapTo2dHexagonalQuadGrid(FVector position, FRotator Rotation, float TileSize) {
    return FRotator{};
}

void UBreakerFunctionLibrary::RemoveBpComponent(UObject* Asset, USCS_Node* Node) {
}

void UBreakerFunctionLibrary::RegisterIntConsoleVariable(const FString& ConsoleVariableName, int32 DefaultValue) {
}

void UBreakerFunctionLibrary::RegisterBooleanConsoleVariable(const FString& ConsoleVariableName, bool DefaultValue) {
}

bool UBreakerFunctionLibrary::QueryUnderwaterByLocation(UObject* WorldContextObject, FVector Location, float ApproximateEntityHeight, bool& OutInNullWater) {
    return false;
}

bool UBreakerFunctionLibrary::QueryUnderwater(AActor* Actor, float ApproximateEntityHeight) {
    return false;
}

bool UBreakerFunctionLibrary::QueryPangeaSurfaceInfo(const UObject* WorldContextObject, FVector Location, float SafeSlope, FBreakerPangeaQueryResult& QueryResult) {
    return false;
}

void UBreakerFunctionLibrary::ProcessValueForScrollBox(UScrollBox* ScrollBox, float AnalogValue, float ScrollSpeed) {
}

FEventReply UBreakerFunctionLibrary::ProcessAnalogInputEventForScrollBox(UScrollBox* ScrollBox, const FAnalogInputEvent& InputEvent, float ScrollSpeed, float DeadZonePercent) {
    return FEventReply{};
}

FVector UBreakerFunctionLibrary::PredictGroundedIntercept(AActor* Us, AActor* Target, float MaxTargetSpeed, float OurSpeed, float InitialDelay, float HeightCheck) {
    return FVector{};
}

FVector UBreakerFunctionLibrary::PositionSnapTo2dHexagonalQuadGrid(FVector position, float TileSize) {
    return FVector{};
}

FVector UBreakerFunctionLibrary::PositionSnapTo2dHexagonalGrid(FVector position, float TileSize) {
    return FVector{};
}

void UBreakerFunctionLibrary::PauseOrResumeAllAIPathing(const bool shouldPause, TArray<AActor*>& all_AICharacters) {
}

void UBreakerFunctionLibrary::PauseOrResumeAllAIBehaviors(const bool shouldPause, TArray<AActor*>& all_AICharacters) {
}

TArray<FAssetData> UBreakerFunctionLibrary::OpenAssetBrowserDialog(const FString& DialogTitle, const FString& DefaultPath) {
    return TArray<FAssetData>();
}

bool UBreakerFunctionLibrary::NotEqual_BiomeZoneInfoBiomeZoneInfo(FBiomeZoneInfo A, FBiomeZoneInfo B) {
    return false;
}

FBreakerDamage UBreakerFunctionLibrary::ModifyDamageAmount(const FBreakerDamage& Damage, float Multiplier) {
    return FBreakerDamage{};
}

FVector UBreakerFunctionLibrary::MakePositionVisibleToViewer(const UObject* WorldContextObject, AActor* Viewer, const FVector& ViewerPosition, const FVector& position, const TArray<AActor*>& IgnoredActors, bool bShareZ, bool bMustBeNavigable) {
    return FVector{};
}

void UBreakerFunctionLibrary::LaggyTargetTracking(FVector CurrentAimPosition, FVector CurrentVelocity, FVector TargetPosition, float Accel, float Damp, float MaxDistance, float TimeStep, FVector& OutAimPosition, FVector& OutVelocity) {
}

bool UBreakerFunctionLibrary::IsWorldValid(const UWorld* worldInstance) {
    return false;
}

bool UBreakerFunctionLibrary::IsValidRotation(const FRotator inTestRotation) {
    return false;
}

bool UBreakerFunctionLibrary::IsValidOrientation(const FQuat inTestOrientation) {
    return false;
}

bool UBreakerFunctionLibrary::IsValidLocation(const FVector inTestLocation) {
    return false;
}

bool UBreakerFunctionLibrary::IsValidLoadoutEquipmentType(const EEquipmentType EquipmentType) {
    return false;
}

bool UBreakerFunctionLibrary::IsValidDirection(const FVector inTestVector) {
    return false;
}

bool UBreakerFunctionLibrary::IsSelfDamage(const FBreakerDamage& Damage) {
    return false;
}

bool UBreakerFunctionLibrary::IsPositionOnScreenForTarget(const AActor* Target, FVector position) {
    return false;
}

bool UBreakerFunctionLibrary::IsPlayInEditor(UObject* WorldContextObject) {
    return false;
}

bool UBreakerFunctionLibrary::IsPlatformSteamDeck() {
    return false;
}

bool UBreakerFunctionLibrary::IsMeshPlayingAttackAnim(USkeletalMeshComponent* Mesh, float LookAheadWindow) {
    return false;
}

bool UBreakerFunctionLibrary::IsLocationInSafeSpace(const UObject* WorldContextObject, FVector Location, float Radius) {
    return false;
}

bool UBreakerFunctionLibrary::IsKeyForAxisMapping(FKey Key, FName AxisName) {
    return false;
}

bool UBreakerFunctionLibrary::IsKeyForActionMapping(FKey Key, FName ActionName) {
    return false;
}

bool UBreakerFunctionLibrary::IsInGameWorld(UObject* WorldContextObject) {
    return false;
}

bool UBreakerFunctionLibrary::IsCookingPackagedGame() {
    return false;
}

bool UBreakerFunctionLibrary::IsCombatAttackDataValid(const FAICombatAttackData& attackData) {
    return false;
}

bool UBreakerFunctionLibrary::IsAIActor(const AActor* actorToCheck) {
    return false;
}

bool UBreakerFunctionLibrary::IsActorDead(AActor* Target) {
    return false;
}

USkeletalMeshComponent* UBreakerFunctionLibrary::GetVisualMeshToUse(AActor* Actor) {
    return NULL;
}

void UBreakerFunctionLibrary::GetTimeValues_24(float Time, int32& Hours, int32& Minutes, int32& Seconds) {
}

FVector UBreakerFunctionLibrary::GetStandingLocation(const AActor* InActor, FVector FloorLocation) {
    return FVector{};
}

FGameplayTag UBreakerFunctionLibrary::GetStaggerModifierAttributeTag() {
    return FGameplayTag{};
}

FGameplayTag UBreakerFunctionLibrary::GetShieldAttributeTag() {
    return FGameplayTag{};
}

void UBreakerFunctionLibrary::GetScreenPosition(const UObject* WorldContextObject, FVector WorldLocation, FMargin ScreenEdgePercent, FVector2D& OutScreenPosition, bool& OutIsOnScreen) {
}

bool UBreakerFunctionLibrary::GetSaveSlotMapping(const FSaveSlotMapper& Mapper, FGameplayTag SaveSlotTag, FString& OutSlotName) {
    return false;
}

bool UBreakerFunctionLibrary::GetPlayerStates(const UObject* WorldContextObject, TArray<APlayerState*>& out_PlayerStateArray) {
    return false;
}

APawn* UBreakerFunctionLibrary::GetPlayerPawnAtIndex(const UObject* WorldContextObject, int32 Index) {
    return NULL;
}

TArray<FVector> UBreakerFunctionLibrary::GetPaintedVertices(const UStaticMeshComponent* StaticMeshComponent, int32 ColorThreshold) {
    return TArray<FVector>();
}

APawn* UBreakerFunctionLibrary::GetOwningPawn(AActor* ChildActor) {
    return NULL;
}

int32 UBreakerFunctionLibrary::GetNumPlayersInGame(const UObject* WorldContextObject) {
    return 0;
}

AActor* UBreakerFunctionLibrary::GetMostRecentTargetActorFromRecentAttackInfo(const UChoreographyComponent* choreographerAIComponent) {
    return NULL;
}

FGameplayTag UBreakerFunctionLibrary::GetModTagForStatusEffect(const UObject* WorldContextObject, const FGameplayTag& StatusEffectTag) {
    return FGameplayTag{};
}

ABreakerPawn* UBreakerFunctionLibrary::GetLocalPlayerPawn(UObject* WorldContextObject) {
    return NULL;
}

FRotator UBreakerFunctionLibrary::GetInvalidRotator() {
    return FRotator{};
}

float UBreakerFunctionLibrary::GetInvalidRangeValue() {
    return 0.0f;
}

FQuat UBreakerFunctionLibrary::GetInvalidOrientation() {
    return FQuat{};
}

FVector UBreakerFunctionLibrary::GetInvalidLocationVector() {
    return FVector{};
}

FVector UBreakerFunctionLibrary::GetInvalidDirectionVector() {
    return FVector{};
}

FGameplayTag UBreakerFunctionLibrary::GetIgnoreHitReactLightAttributeTag() {
    return FGameplayTag{};
}

FTransform UBreakerFunctionLibrary::GetIdendityTransform() {
    return FTransform{};
}

float UBreakerFunctionLibrary::GetFloatCurveLength(const UCurveFloat* InCurveFloat) {
    return 0.0f;
}

APawn* UBreakerFunctionLibrary::GetFirstPlayerPawnFromIndex(const UObject* WorldContextObject, int32 Index) {
    return NULL;
}

FGameplayTag UBreakerFunctionLibrary::GetDamageModifierAttributeTag() {
    return FGameplayTag{};
}

int32 UBreakerFunctionLibrary::GetDamageFingerprint(const UObject* WorldContext) {
    return 0;
}

FString UBreakerFunctionLibrary::GetCVarString(const FString& CVarName) {
    return TEXT("");
}

int32 UBreakerFunctionLibrary::GetCVarInt(const FString& CVarName) {
    return 0;
}

float UBreakerFunctionLibrary::GetCVarFloat(const FString& CVarName) {
    return 0.0f;
}

bool UBreakerFunctionLibrary::GetCVarBool(const FString& CVarName) {
    return false;
}

FGameplayTag UBreakerFunctionLibrary::GetContainerOwnerHealthTag(const TScriptInterface<IAttributeContainerInterface>& Target) {
    return FGameplayTag{};
}

FVector UBreakerFunctionLibrary::GetClosestPointOnLineSegment(FVector PositionA, FVector PositionB, FVector QueryPosition) {
    return FVector{};
}

UObject* UBreakerFunctionLibrary::GetClassCDO(UClass* InClass) {
    return NULL;
}

UChoreographyComponent* UBreakerFunctionLibrary::GetChoreographryComponentForAIActor(const AActor* inAIActor) {
    return NULL;
}

FRotator UBreakerFunctionLibrary::GetCameraRotation(UObject* WorldContextObject) {
    return FRotator{};
}

FVector UBreakerFunctionLibrary::GetCameraPosition(UObject* WorldContextObject) {
    return FVector{};
}

ABreakerWorldSettings* UBreakerFunctionLibrary::GetBreakerWorldSettings(UObject* WorldContextObject) {
    return NULL;
}

UHBL_CrowdFollowingComponent* UBreakerFunctionLibrary::GetBreakerCrowdFollowingComponent(const AActor* InActor) {
    return NULL;
}

ABreakerCam* UBreakerFunctionLibrary::GetBreakerCamera(UObject* WorldContextObject) {
    return NULL;
}

USceneComponent* UBreakerFunctionLibrary::GetBpSceneComponent(USCS_Node* Node) {
    return NULL;
}

TArray<USCS_Node*> UBreakerFunctionLibrary::GetBpComponents(UObject* Asset) {
    return TArray<USCS_Node*>();
}

USCS_Node* UBreakerFunctionLibrary::GetBpComponentParent(UObject* Asset, USCS_Node* Node) {
    return NULL;
}

UClass* UBreakerFunctionLibrary::GetBpComponentClass(USCS_Node* Node) {
    return NULL;
}

UActorComponent* UBreakerFunctionLibrary::GetBpActorComponent(USCS_Node* Node) {
    return NULL;
}

UBlackboardComponent* UBreakerFunctionLibrary::GetBlackboardComponentForActor(const AActor* InActor) {
    return NULL;
}

FGameplayTag UBreakerFunctionLibrary::GetBatterySegmentsAttributeTag() {
    return FGameplayTag{};
}

FGameplayTag UBreakerFunctionLibrary::GetBatteryAttributeTag() {
    return FGameplayTag{};
}

FGameplayTag UBreakerFunctionLibrary::GetAmpSegmentsAttributeTag() {
    return FGameplayTag{};
}

TArray<FGameplayTag> UBreakerFunctionLibrary::GetAllStatusEffectTags(const UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UBreakerFunctionLibrary::GetAllStatusEffectModTags(const UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

void UBreakerFunctionLibrary::GetAllPlayersAndCompanions(const UObject* WorldContextObject, TArray<AActor*>& OutActors) {
}

TArray<ABreakerPawn*> UBreakerFunctionLibrary::GetAllPlayerPawns(UObject* WorldContextObject) {
    return TArray<ABreakerPawn*>();
}

bool UBreakerFunctionLibrary::GetAllowPhysicsRotationDuringAnimRootMotion(const AAIController* ownerAIController) {
    return false;
}

ACMCtrlBase* UBreakerFunctionLibrary::GetAIControllerForActor(const AActor* InActor) {
    return NULL;
}

FGameplayTag UBreakerFunctionLibrary::GetActorPowerAttributeTag(const AActor* Actor) {
    return FGameplayTag{};
}

FVector UBreakerFunctionLibrary::GetActorLocationAtHeightPercentage(const AActor* inActorToSample, const float inHeightPercentage) {
    return FVector{};
}

FGameplayTag UBreakerFunctionLibrary::GetActorHealthTag(const AActor* Target) {
    return FGameplayTag{};
}

float UBreakerFunctionLibrary::GetActorHealthRatio(AActor* Target) {
    return 0.0f;
}

float UBreakerFunctionLibrary::GetActorHealth(AActor* Target) {
    return 0.0f;
}

FVector UBreakerFunctionLibrary::GetActorGroundLocation(const AActor* Actor) {
    return FVector{};
}

TScriptInterface<IAttributeContainerInterface> UBreakerFunctionLibrary::GetActorAttributeComponent(AActor* Actor) {
    return NULL;
}

void UBreakerFunctionLibrary::Get2dHexagonalQuadAttributes(FVector position, float TileSize, FVector& HexTileCenter, FVector& HexSubquadCenter, FVector& HexSubquadForwardVector, FVector& HexSubquadRightVector) {
}

FVector UBreakerFunctionLibrary::FindNearestPositionFromArray(FVector QueryPosition, TArray<FVector> Array) {
    return FVector{};
}

FVector UBreakerFunctionLibrary::FindNavigableLocationInRadius(const UObject* WorldContextObject, FFindLocationParams Params) {
    return FVector{};
}

bool UBreakerFunctionLibrary::FindKeyForAxisMapping(FName AxisName, bool bGamepad, FKey& OutKey) {
    return false;
}

bool UBreakerFunctionLibrary::FindKeyForActionMapping(FName ActionName, bool bGamepad, FKey& OutKey) {
    return false;
}

AActor* UBreakerFunctionLibrary::FindAssassinTarget(ACMCharBase* inAssassinBaseCMChar) {
    return NULL;
}

TArray<AActor*> UBreakerFunctionLibrary::FilterForLineOfSight(const AActor* Src, const TArray<AActor*>& ListToFilter) {
    return TArray<AActor*>();
}

float UBreakerFunctionLibrary::EvaluateCurve(FRuntimeFloatCurve Curve, float InTime) {
    return 0.0f;
}

bool UBreakerFunctionLibrary::EqualEqual_BiomeZoneInfoBiomeZoneInfo(FBiomeZoneInfo A, FBiomeZoneInfo B) {
    return false;
}

bool UBreakerFunctionLibrary::DoActorsHaveLineOfSight(const AActor* Src, const AActor* Dst) {
    return false;
}

FTwoVectors UBreakerFunctionLibrary::DeprojectMouseToWorld() {
    return FTwoVectors{};
}

float UBreakerFunctionLibrary::Deltf(float Source, float Target, float StepSize) {
    return 0.0f;
}

bool UBreakerFunctionLibrary::DeleteSaveSlotByMapping(const FSaveSlotMapper& Mapper, FGameplayTag SaveSlotTag) {
    return false;
}

void UBreakerFunctionLibrary::DebugShowLineToClassType(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FColor Color, float target_sphere_radius, float display_time_override, bool ClearBatchLines) {
}

void UBreakerFunctionLibrary::CreateNotification(FText Message) {
}

void UBreakerFunctionLibrary::CopyToClipboard(UObject* WorldContextObject, const FString& StringToCopy) {
}

void UBreakerFunctionLibrary::ConvertCharacterStickToWorldDirection(const FCharacterMovementStick& Stick, FVector& OutDirection) {
}

FVector UBreakerFunctionLibrary::ClipVector(FVector Vector, float Max) {
    return FVector{};
}

FVector UBreakerFunctionLibrary::ClampVectorToForward(FVector ClampedVector, FVector ForwardVector, FRotator MaximumDegrees) {
    return FVector{};
}

float UBreakerFunctionLibrary::ClampFloatToRange(const float Value, const FFloatRange Range, const bool bWrapValue) {
    return 0.0f;
}

FString UBreakerFunctionLibrary::BuildSourceString(const FText& Text) {
    return TEXT("");
}

void UBreakerFunctionLibrary::BreakerPrintString(const UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration) {
}

FGameplayTag UBreakerFunctionLibrary::BiomeTagFromIndex(const int32 BiomeIndex) {
    return FGameplayTag{};
}

FBreakerDamage UBreakerFunctionLibrary::AddUniqueDamageDetail(const FBreakerDamage& Damage, EDamageDetail Detail) {
    return FBreakerDamage{};
}

FBreakerDamage UBreakerFunctionLibrary::AddStatusEffectToDamage(const FBreakerDamage& Damage, FGameplayTag StatusEffectTag) {
    return FBreakerDamage{};
}

USCS_Node* UBreakerFunctionLibrary::AddStaticMeshComponentToAsset(UObject* Asset, UStaticMesh* StaticMesh, USCS_Node* ParentNode) {
    return NULL;
}

void UBreakerFunctionLibrary::AddStaticMeshComponentsToAsset(UObject* Asset, TArray<UStaticMesh*> StaticMeshes, USCS_Node* ParentNode) {
}

USCS_Node* UBreakerFunctionLibrary::AddSceneComponentToAsset(UObject* Asset, USCS_Node* ParentNode) {
    return NULL;
}

USCS_Node* UBreakerFunctionLibrary::AddIsmComponentToAsset(UObject* Asset, FName Name, USCS_Node* ParentNode) {
    return NULL;
}

void UBreakerFunctionLibrary::AddForceToProjectile(UProjectileMovementComponent* Projectile, FVector Force) {
}

USCS_Node* UBreakerFunctionLibrary::AddComponentToAsset(UObject* Asset, UClass* ClassToAdd, FName Name, USCS_Node* ParentNode) {
    return NULL;
}

UActorComponent* UBreakerFunctionLibrary::AddComponentToActor(AActor* Actor, USceneComponent* FutureParent, FName Name, UClass* NewComponentClass) {
    return NULL;
}


