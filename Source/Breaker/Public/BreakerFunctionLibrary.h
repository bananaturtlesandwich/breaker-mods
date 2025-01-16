#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "AICombatAttackData.h"
#include "BiomeZoneInfo.h"
#include "BreakerDamage.h"
#include "BreakerPangeaQueryResult.h"
#include "CharacterMovementStick.h"
#include "EAttackChannel.h"
#include "EDamageDetail.h"
#include "EEquipmentType.h"
#include "EnemySpawnPreference.h"
#include "FindLocationParams.h"
#include "SaveSlotMapper.h"
#include "Templates/SubclassOf.h"
#include "BreakerFunctionLibrary.generated.h"

class AAIController;
class AActor;
class ABreakerCam;
class ABreakerPawn;
class ABreakerWorldSettings;
class ACMCharBase;
class ACMCtrlBase;
class APawn;
class APlayerState;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UActorComponent;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UCharacterAttributeComponent;
class UChoreographyComponent;
class UCurveFloat;
class UHBL_CrowdFollowingComponent;
class UObject;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USCS_Node;
class USceneComponent;
class UScrollBox;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UWorld;

UCLASS(Blueprintable)
class UBreakerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBreakerFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisLogOrientedBox(UObject* WorldContextObject, FBox BoxShape, const FMatrix& Matrix, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisLogCylinder(UObject* WorldContextObject, const FVector Start, const FVector End, const float Radius, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisLogCone(UObject* WorldContextObject, FVector Origin, const FVector& Direction, const float Length, const float AngleInDegrees, const FString& Text, FLinearColor ObjectColor, float Thickness, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisLogCapsule(UObject* WorldContextObject, const FVector Center, const float HalfHeight, const float Radius, const FQuat& Rotation, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisLogArrow(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisLog2dConvexPoly(UObject* WorldContextObject, const TArray<FVector>& Points, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBiomeZoneInfo VirtualBiomeZoneInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Valid_EnemySpawnPreference(const FEnemySpawnPreference& Preference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Valid_BiomeZoneInfo(const FBiomeZoneInfo& BiomeZoneInfo);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCullDistanceInfo();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool UpdateCombatBlackboardValuesForAI(const APawn* inAIToUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool UpdateBTCombatBlackboardValuesWithAttackChannel(const UBehaviorTreeComponent* ownerBehaviorTreeComponent, const EAttackChannel attackChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool UpdateBTComatBlackboardValues(const UBehaviorTreeComponent* ownerBehaviorTreeComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool TryApplyDamageToHitbox(AActor* Caller, UPrimitiveComponent* HitBox, const FBreakerDamage& Damage, bool bCheckOnlyIfCouldApply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector TrimVector(FVector Vector, float Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerExplosionReaction(UObject* WorldContextObject, ABreakerPawn* InstigatingBreakerPawn, const FVector ExplsionOrigin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector SnapPositionToGroundWithSlope(const UObject* WorldContextObject, const FVector& position, const TArray<AActor*>& IgnoredActors, float ZOffset, float ZStartOffset, TEnumAsByte<ECollisionChannel> CollisionChannel, float& OutSlope);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector SnapPositionToGround(const UObject* WorldContextObject, const FVector& position, const TArray<AActor*>& IgnoredActors, float ZOffset, float ZStartOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldRefillAttribute(const UCharacterAttributeComponent* AttributeComponent, const FGameplayTag& AttributeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldModifyAttributeMax(const UCharacterAttributeComponent* AttributeComponent, const FGameplayTag& AttributeTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShakeCamera_WorldDirection(UObject* WorldContextObject, FVector Direction, float DurationMultiplier, float AmplitudeMultiplier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShakeCamera_ScreenDirection(UObject* WorldContextObject, FVector2D Direction, float DurationMultiplier, float AmplitudeMultiplier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShakeCamera_RandomDirection(UObject* WorldContextObject, float DurationMultiplier, float AmplitudeMultiplier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShakeCamera_Degrees(UObject* WorldContextObject, float Degrees, float DurationMultiplier, float AmplitudeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeshRagdolling(USkeletalMeshComponent* SkelMesh, bool bIsRagdolling);
    
    UFUNCTION(BlueprintCallable)
    static void SetBpComponentScale(UObject* Asset, USCS_Node* Node, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetBpComponentRotation(UObject* Asset, USCS_Node* Node, FRotator Rotator);
    
    UFUNCTION(BlueprintCallable)
    static void SetBpComponentLocation(UObject* Asset, USCS_Node* Node, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ScaleVectorOnAxis(FVector Vector, FVector Axis, float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RotationSnapTo2dHexagonalQuadGrid(FVector position, FRotator Rotation, float TileSize);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBpComponent(UObject* Asset, USCS_Node* Node);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterIntConsoleVariable(const FString& ConsoleVariableName, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterBooleanConsoleVariable(const FString& ConsoleVariableName, bool DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool QueryUnderwaterByLocation(UObject* WorldContextObject, FVector Location, float ApproximateEntityHeight, bool& OutInNullWater);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryUnderwater(AActor* Actor, float ApproximateEntityHeight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool QueryPangeaSurfaceInfo(const UObject* WorldContextObject, FVector Location, float SafeSlope, FBreakerPangeaQueryResult& QueryResult);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessValueForScrollBox(UScrollBox* ScrollBox, float AnalogValue, float ScrollSpeed);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply ProcessAnalogInputEventForScrollBox(UScrollBox* ScrollBox, const FAnalogInputEvent& InputEvent, float ScrollSpeed, float DeadZonePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PredictGroundedIntercept(AActor* Us, AActor* Target, float MaxTargetSpeed, float OurSpeed, float InitialDelay, float HeightCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PositionSnapTo2dHexagonalQuadGrid(FVector position, float TileSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PositionSnapTo2dHexagonalGrid(FVector position, float TileSize);
    
    UFUNCTION(BlueprintCallable)
    static void PauseOrResumeAllAIPathing(const bool shouldPause, TArray<AActor*>& all_AICharacters);
    
    UFUNCTION(BlueprintCallable)
    static void PauseOrResumeAllAIBehaviors(const bool shouldPause, TArray<AActor*>& all_AICharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAssetData> OpenAssetBrowserDialog(const FString& DialogTitle, const FString& DefaultPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_BiomeZoneInfoBiomeZoneInfo(FBiomeZoneInfo A, FBiomeZoneInfo B);
    
    UFUNCTION(BlueprintCallable)
    static FBreakerDamage ModifyDamageAmount(const FBreakerDamage& Damage, float Multiplier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector MakePositionVisibleToViewer(const UObject* WorldContextObject, AActor* Viewer, const FVector& ViewerPosition, const FVector& position, const TArray<AActor*>& IgnoredActors, bool bShareZ, bool bMustBeNavigable);
    
    UFUNCTION(BlueprintCallable)
    static void LaggyTargetTracking(FVector CurrentAimPosition, FVector CurrentVelocity, FVector TargetPosition, float Accel, float Damp, float MaxDistance, float TimeStep, FVector& OutAimPosition, FVector& OutVelocity);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWorldValid(const UWorld* worldInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidRotation(const FRotator inTestRotation);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidOrientation(const FQuat inTestOrientation);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidLocation(const FVector inTestLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLoadoutEquipmentType(const EEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidDirection(const FVector inTestVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelfDamage(const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPositionOnScreenForTarget(const AActor* Target, FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformSteamDeck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMeshPlayingAttackAnim(USkeletalMeshComponent* Mesh, float LookAheadWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationInSafeSpace(const UObject* WorldContextObject, FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyForAxisMapping(FKey Key, FName AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyForActionMapping(FKey Key, FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInGameWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCookingPackagedGame();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool IsCombatAttackDataValid(const FAICombatAttackData& attackData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAIActor(const AActor* actorToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorDead(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetVisualMeshToUse(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTimeValues_24(float Time, int32& Hours, int32& Minutes, int32& Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetStandingLocation(const AActor* InActor, FVector FloorLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetStaggerModifierAttributeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetShieldAttributeTag();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetScreenPosition(const UObject* WorldContextObject, FVector WorldLocation, FMargin ScreenEdgePercent, FVector2D& OutScreenPosition, bool& OutIsOnScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSaveSlotMapping(const FSaveSlotMapper& Mapper, FGameplayTag SaveSlotTag, FString& OutSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPlayerStates(const UObject* WorldContextObject, UPARAM(Ref) TArray<APlayerState*>& out_PlayerStateArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetPlayerPawnAtIndex(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetPaintedVertices(const UStaticMeshComponent* StaticMeshComponent, int32 ColorThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* GetOwningPawn(AActor* ChildActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumPlayersInGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* GetMostRecentTargetActorFromRecentAttackInfo(const UChoreographyComponent* choreographerAIComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetModTagForStatusEffect(const UObject* WorldContextObject, const FGameplayTag& StatusEffectTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABreakerPawn* GetLocalPlayerPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetInvalidRotator();
    
    UFUNCTION(BlueprintCallable)
    static float GetInvalidRangeValue();
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetInvalidOrientation();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetInvalidLocationVector();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetInvalidDirectionVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetIgnoreHitReactLightAttributeTag();
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetIdendityTransform();
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatCurveLength(const UCurveFloat* InCurveFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetFirstPlayerPawnFromIndex(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDamageModifierAttributeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetDamageFingerprint(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCVarString(const FString& CVarName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCVarInt(const FString& CVarName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCVarFloat(const FString& CVarName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCVarBool(const FString& CVarName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetContainerOwnerHealthTag(const TScriptInterface<IAttributeContainerInterface>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestPointOnLineSegment(FVector PositionA, FVector PositionB, FVector QueryPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetClassCDO(UClass* InClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UChoreographyComponent* GetChoreographryComponentForAIActor(const AActor* inAIActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FRotator GetCameraRotation(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetCameraPosition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABreakerWorldSettings* GetBreakerWorldSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UHBL_CrowdFollowingComponent* GetBreakerCrowdFollowingComponent(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABreakerCam* GetBreakerCamera(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* GetBpSceneComponent(USCS_Node* Node);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USCS_Node*> GetBpComponents(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static USCS_Node* GetBpComponentParent(UObject* Asset, USCS_Node* Node);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetBpComponentClass(USCS_Node* Node);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetBpActorComponent(USCS_Node* Node);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UBlackboardComponent* GetBlackboardComponentForActor(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetBatterySegmentsAttributeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetBatteryAttributeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetAmpSegmentsAttributeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllStatusEffectTags(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllStatusEffectModTags(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayersAndCompanions(const UObject* WorldContextObject, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ABreakerPawn*> GetAllPlayerPawns(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllowPhysicsRotationDuringAnimRootMotion(const AAIController* ownerAIController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static ACMCtrlBase* GetAIControllerForActor(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetActorPowerAttributeTag(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetActorLocationAtHeightPercentage(const AActor* inActorToSample, const float inHeightPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetActorHealthTag(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorHealthRatio(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorHealth(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorGroundLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TScriptInterface<IAttributeContainerInterface> GetActorAttributeComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Get2dHexagonalQuadAttributes(FVector position, float TileSize, FVector& HexTileCenter, FVector& HexSubquadCenter, FVector& HexSubquadForwardVector, FVector& HexSubquadRightVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindNearestPositionFromArray(FVector QueryPosition, TArray<FVector> Array);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector FindNavigableLocationInRadius(const UObject* WorldContextObject, FFindLocationParams Params);
    
    UFUNCTION(BlueprintCallable)
    static bool FindKeyForAxisMapping(FName AxisName, bool bGamepad, FKey& OutKey);
    
    UFUNCTION(BlueprintCallable)
    static bool FindKeyForActionMapping(FName ActionName, bool bGamepad, FKey& OutKey);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* FindAssassinTarget(ACMCharBase* inAssassinBaseCMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> FilterForLineOfSight(const AActor* Src, const TArray<AActor*>& ListToFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float EvaluateCurve(FRuntimeFloatCurve Curve, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_BiomeZoneInfoBiomeZoneInfo(FBiomeZoneInfo A, FBiomeZoneInfo B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoActorsHaveLineOfSight(const AActor* Src, const AActor* Dst);
    
    UFUNCTION(BlueprintCallable)
    static FTwoVectors DeprojectMouseToWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Deltf(float Source, float Target, float StepSize);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteSaveSlotByMapping(const FSaveSlotMapper& Mapper, FGameplayTag SaveSlotTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugShowLineToClassType(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FColor Color, float target_sphere_radius, float display_time_override, bool ClearBatchLines);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNotification(FText Message);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyToClipboard(UObject* WorldContextObject, const FString& StringToCopy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertCharacterStickToWorldDirection(const FCharacterMovementStick& Stick, FVector& OutDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClipVector(FVector Vector, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampVectorToForward(FVector ClampedVector, FVector ForwardVector, FRotator MaximumDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ClampFloatToRange(const float Value, const FFloatRange Range, const bool bWrapValue);
    
    UFUNCTION(BlueprintCallable)
    static FString BuildSourceString(const FText& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BreakerPrintString(const UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag BiomeTagFromIndex(const int32 BiomeIndex);
    
    UFUNCTION(BlueprintCallable)
    static FBreakerDamage AddUniqueDamageDetail(const FBreakerDamage& Damage, EDamageDetail Detail);
    
    UFUNCTION(BlueprintCallable)
    static FBreakerDamage AddStatusEffectToDamage(const FBreakerDamage& Damage, FGameplayTag StatusEffectTag);
    
    UFUNCTION(BlueprintCallable)
    static USCS_Node* AddStaticMeshComponentToAsset(UObject* Asset, UStaticMesh* StaticMesh, USCS_Node* ParentNode);
    
    UFUNCTION(BlueprintCallable)
    static void AddStaticMeshComponentsToAsset(UObject* Asset, TArray<UStaticMesh*> StaticMeshes, USCS_Node* ParentNode);
    
    UFUNCTION(BlueprintCallable)
    static USCS_Node* AddSceneComponentToAsset(UObject* Asset, USCS_Node* ParentNode);
    
    UFUNCTION(BlueprintCallable)
    static USCS_Node* AddIsmComponentToAsset(UObject* Asset, FName Name, USCS_Node* ParentNode);
    
    UFUNCTION(BlueprintCallable)
    static void AddForceToProjectile(UProjectileMovementComponent* Projectile, FVector Force);
    
    UFUNCTION(BlueprintCallable)
    static USCS_Node* AddComponentToAsset(UObject* Asset, UClass* ClassToAdd, FName Name, USCS_Node* ParentNode);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentToActor(AActor* Actor, USceneComponent* FutureParent, FName Name, UClass* NewComponentClass);
    
};

