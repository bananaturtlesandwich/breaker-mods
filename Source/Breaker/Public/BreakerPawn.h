#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Attribute.h"
#include "AttributeComponentInterface.h"
#include "ADSEventDelegate.h"
#include "AimingOrbitCameraInterface.h"
#include "AudioDamageInterface.h"
#include "AudioEventsCollection.h"
#include "BreakerCamModifierData.h"
#include "BreakerCharacterLandingEvent.h"
#include "BreakerDamage.h"
#include "BreakerDamageable.h"
#include "BreakerOrbitCamDelegate.h"
#include "CharacterAgentInterface.h"
#include "CharacterAudioInterface.h"
#include "CharacterCombatActivityEvent.h"
#include "CharacterMovementStick.h"
#include "DashEventParams.h"
#include "DashReleasedDelegate.h"
#include "EBreakerCameraType.h"
#include "EBreakerDamageResponse.h"
#include "EBreakerSyncedAnimType.h"
#include "ECharacterEquipmentSlot.h"
#include "ECombatActionResult.h"
#include "ECombatActionRoute.h"
#include "EEquipmentType.h"
#include "ELevelState.h"
#include "EquipmentEventDelegate.h"
#include "GenericGearInfo.h"
#include "InteractableTooExpensiveEventDelegate.h"
#include "JumpPadJumpEventDelegate.h"
#include "LandedOnGroundEventDelegate.h"
#include "ModSpecializationInfo.h"
#include "NewBiomeEnteredDelegate.h"
#include "NewZoneEnteredDelegate.h"
#include "NullWaterVolumeEventDelegate.h"
#include "OnAnimInstanceChangedDelegate.h"
#include "OnInflictedDamageDelegate.h"
#include "OnJumpEventDelegate.h"
#include "ParryEventPayload.h"
#include "PawnAudioInterface.h"
#include "PerfectDodgeEventDelegate.h"
#include "PlayerRespawnEventDelegate.h"
#include "ReadyToHoverDelegate.h"
#include "RezTokensChangedEventDelegate.h"
#include "RootMotionPlaySettings.h"
#include "RunStartInAirEventDelegate.h"
#include "ShieldBreakEventDelegate.h"
#include "ShieldBreakInvincibilityEndedEventDelegate.h"
#include "ShieldRegenStartedEventDelegate.h"
#include "TaggedPropertiesInterface.h"
#include "TeleportSucceededEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "TestMonkeyReflectableInterface.h"
#include "ValidGlideConditionsEventDelegate.h"
#include "BreakerPawn.generated.h"

class AActor;
class ABreakerMod;
class ABreakerWeaponProp;
class ASyCom;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UAimingOrbitCameraComponent;
class UAnimInstance;
class UAnimMontage;
class UAttackTargetTriageComponent;
class UBreakerCamModifier;
class UBreakerEquipmentComponent;
class UBreakerInteractorComponent;
class UBreakerMotionWarpingComponent;
class UBreakerPawnInputActions;
class UBreakerPawnMoveManager;
class UBreakerPawnSettings;
class UBreakerPlayerEventListener;
class UBreakerQuestManager;
class UBreakerStateListenerComponent;
class UBreakerStateMachineComponent;
class UCameraComponent;
class UCharacterAttributeComponent;
class UCharacterCombatComponent;
class UCurveFloat;
class UDefaultCameraData;
class UHitStopComponent;
class UMaterialStackComponent;
class UMiniCutsceneCameraComponent;
class UMovementBase;
class UMovementDash;
class UMovementGlider;
class UMovementGrapple;
class UMovementGrindRail;
class UMovementGroundPound;
class UMovementHookshot;
class UMovementHoverboard;
class UMovementRagdoll;
class UMovementRootMotion;
class UMovementSkidStop;
class UMovementSwim;
class UMovementSyncedAnim;
class UObject;
class UPingComponent;
class UPlayerCharacterInfo;
class UPlayerCheatCodes;
class UPlayerDamagePipeline;
class UPlayerRunLogic;
class UPrimitiveComponent;
class UPushBackComponent;
class USceneComponent;
class USignificanceSourceComponent;
class USkeletalMeshComponent;
class UStageReadyListenerComponent;
class USurfaceInfoComponent;
class UTargetingCameraComponent;
class UTutorialManager;

UCLASS(Abstract, Blueprintable)
class ABreakerPawn : public APawn, public IBreakerOrbitCamDelegate, public IPawnAudioInterface, public ICharacterAgentInterface, public IAudioDamageInterface, public ICharacterAudioInterface, public IBreakerDamageable, public IAimingOrbitCameraInterface, public IAttributeComponentInterface, public ITaggedPropertiesInterface, public ITestMonkeyReflectableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashReleased DashReleasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimInstanceChanged OnAnimInstanceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TeleportInMontage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportSucceededEvent TeleportSucceededEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurfaceInfoComponent* SurfaceInfoComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunStartInAirEvent RunStartInAirComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HubMoveSpeedMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewBiomeEntered OnNewBiomeEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewZoneEntered OnNewZoneEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpEvent OnJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpPadJumpEvent OnJumpPadJump_Start;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpPadJumpEvent OnJumpPadJump_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJumpPadJump;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SuperArmorTokens;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UBreakerPawnSettings* ClassSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CosmeticSkelMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementSyncedAnim* SyncedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementRootMotion* RootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStateMachineComponent* PrimaryStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerPlayerEventListener* GlobalEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStateListenerComponent* Defeated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStateListenerComponent* Revived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageReadyListenerComponent* StageReadyListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignificanceSourceComponent* SignificanceSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackTargetTriageComponent* TargetTriage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnMagnetismDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraBaseTrackingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAimingOrbitCameraComponent* AimingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAimingOrbitCameraComponent* AmpMacroAimingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMiniCutsceneCameraComponent* InteriorCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMiniCutsceneCameraComponent* NoLagCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMiniCutsceneCameraComponent* LoadoutScreenCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetingCameraComponent* ZLockCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMiniCutsceneCameraComponent* PauseCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushBackComponent* PushBackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerMotionWarpingComponent* MotionWarpingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerInteractorComponent* InteractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerPawnInputActions* InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerPawnMoveManager* MoveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerRunLogic* RunLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerDamagePipeline* DamagePipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerCheatCodes* Cheats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTutorialManager* TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPingComponent* PingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialStackComponent* MaterialStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementBase* BaseMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementRagdoll* RagdollMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementDash* DashAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementSkidStop* SkidStopAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementHoverboard* HoverboardAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementGlider* GliderAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementSwim* SwimAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementGrapple* GrappleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementGroundPound* SlamAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementGrindRail* GrindAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementHookshot* HookshotAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStateListenerComponent* Sprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStateListenerComponent* Downed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimHitReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimHitReact_InAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimHitReact_OptionalSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyHitReactImpulseMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyHitRectImpulseMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuperArmorOnMontages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentEvent OnEquipmentCoolDownDenialEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentEvent OnEquipmentActivatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PerfectDodgeStatModTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IncreasedAmpModDropStatModTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerfectDodgeEvent PerfectDodgeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyToHover ReadyToHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValidGlideConditionsEvent ValidGlideConditionsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBroadCastReadyToHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInflictedDamage OnInflictedDamage_Server;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInflictedDamage OnReceivedDamage_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRezTokensChangedEvent OnRezTokensChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRezTokensChangedEvent OnRezTokensReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASyCom* SyCom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDefaultCameraData* CameraData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBreakerOrbitCamDelegate> CachedAimingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CachedCustomAimCameraBlendOutCurve;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CHEAT_OverrideConstantCameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CHEAT_CameraLagSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBreakerCamModifier*> CameraModifiers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlayerEnemyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxJumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinJumpIdealImpulseFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeForMaxJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxJumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRequiredBetweenAdditionalJumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeJumpInputBuffered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessiveJumpImpulseFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMagnetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMagnetSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetDirectionFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDashMagnetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDashMagnetStickAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashingIFrameSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashingIFrameSecondsPerfectDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashBufferTimeDuringDashSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashStopSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FellInHoleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerAlly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryHealth_StartRegeneration_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryHealth_ExtraStartRegeneration_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryHealth_StartRegeneration_Timer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldBreakEvent OnShieldBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBreakThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldRegenStartedEvent OnShieldRegenStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldBreakInvincibilityEndedEvent OnShieldBreakInvincibilityEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBreakInvincibilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBreakInvincibilityTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkinOfYourTeethThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkinOfYourTeethMinimumDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkinOfYourTeethModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOEParryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOEParryDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOEParryStaggerModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaterNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaterLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNullWaterVolumeEvent NullWaterStatusChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHiddenFromEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimSuccessiveJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FADSEvent OnEnterADS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FADSEvent OnExitADS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRespawnEvent OnRespawnDuringRun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRespawnEvent OnRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandedOnGroundEvent OnGroundImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DisabledLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidGlideConditions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableTooExpensiveEvent InteractableTooExpensiveEvent;
    
    ABreakerPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacter(const UPlayerCharacterInfo* NewInfo);
    
    UFUNCTION(BlueprintCallable)
    void TryStopCurrentAnimation_Local(float BlendOutTime, UAnimMontage* SpecificMontage);
    
    UFUNCTION(BlueprintCallable)
    void TryClearAnimSync_Local();
    
    UFUNCTION(BlueprintCallable)
    void TriggerJumpPadImpulse_Local(float JumpStrength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeleportCompanions(const TArray<AActor*>& TeleportedCompanions);
    
    UFUNCTION(BlueprintCallable)
    void TeleportAnimationOnLevelFadeInEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable)
    void SuspendInput(const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    void StopReplicatedMontage(UAnimMontage* Anim, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopMontage_Server(UAnimMontage* Anim, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopMontage_Multicast(UAnimMontage* Anim, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StartReplicatedMontage(UAnimMontage* Anim, FRootMotionPlaySettings Settings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartMontage_Server(UAnimMontage* Anim, FRootMotionPlaySettings Settings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StartMontage_Multicast(UAnimMontage* Anim, FRootMotionPlaySettings Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFallDamageWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisableProjectile(const FBreakerDamage& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDeflectProjectile(const FBreakerDamage& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void SetNullWaterState(bool bNewState);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveMod(AActor* RemoveFromActor, FGameplayTag ModTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddMod(AActor* AddToActor, FModSpecializationInfo ModInfo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateSyCom(const FGameplayTag& NewSyComTag);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_UpdateRemotePlayerSpawned();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateCharacter(const UPlayerCharacterInfo* NewInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_PlayMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void RevertLocalTempCharacterVisuals();
    
    UFUNCTION(BlueprintCallable)
    void ResumeInput(const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    void RespawnPlayer(const FVector SpawnPoint, bool Relocate);
    
    UFUNCTION(BlueprintCallable)
    void ResolveCombatActivityEvent(UCharacterCombatComponent* SourceComponent, FCharacterCombatActivityEvent Event);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResolveAttackParried(const FParryEventPayload& ParryEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetRezTokens();
    
    UFUNCTION(BlueprintCallable)
    void ResetControlRotationToFacing();
    
    UFUNCTION(BlueprintCallable)
    void ResetControlRotation(const FRotator& ControlRotation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSuperArmor(UObject* Token);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMod(AActor* RemoveFromActor, FGameplayTag ModTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStatusEffects(bool RemovePassiveEffects);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemotePlayerSpawned();
    
public:
    UFUNCTION(BlueprintCallable)
    bool QueryWeaponLineOfSight(FVector TargetLocation, AActor* IgnoredTargetActor, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    bool QueryAimingLocation(FVector& OutLocation, FHitResult& OutHit, float QueryDistance);
    
    UFUNCTION(BlueprintCallable)
    void PushCameraType(const EBreakerCameraType CameraType, const bool bIsForAiming);
    
    UFUNCTION(BlueprintCallable)
    void PopCameraType(const EBreakerCameraType CameraType);
    
    UFUNCTION(BlueprintCallable)
    void PlayRootAnimation(UAnimMontage* Anim, FName SectionName, EBreakerSyncedAnimType SyncType);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontageReplicated(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void PlayMeleeAnimation(UAnimMontage* AnimMontage, FRootMotionPlaySettings Settings);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitReactInterruptAnimation(UAnimMontage* Anim, FName SectionName, FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void Override_PreviousDesiredLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusChanged(FName PrevStatus, FName NextStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaUpdated(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShieldChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReviveStateTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnReviveStateExit();
    
    UFUNCTION(BlueprintCallable)
    void OnReviveStateEntered();
    
    UFUNCTION(BlueprintCallable)
    void OnJumped(int32 WhichJump) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoverboardHitWater(bool bIsOverWater);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentCooldownDenial(const UBreakerEquipmentComponent* EquippedComponent, ECombatActionRoute ActionRoute, ECombatActionResult ActionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentActivated(const UBreakerEquipmentComponent* EquippedComponent, ECombatActionRoute ActionRoute, ECombatActionResult ActionResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDownedTimeout();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDefeated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDashCompleted(FDashEventParams DashEventParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageReceived(AActor* Caller, const FBreakerDamage& Damage, EBreakerDamageResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamagePredicted(AActor* Caller, UPrimitiveComponent* HitBox, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageInflicted(AActor* Receiver, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageDeflected(AActor* Receiver, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterLanding(const FBreakerCharacterLandingEvent& LandingEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_PlayMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Movement_GetStick(FCharacterMovementStick& OutControlInput, bool bEvenIfDisabled, bool bUseCachedRepStick);
    
    UFUNCTION(BlueprintCallable)
    void ModifyRezTokens(int32 Points);
    
    UFUNCTION(BlueprintCallable)
    void ModifyAmmo(int32 Points);
    
    UFUNCTION(BlueprintCallable)
    void LowerHealthOrKill(float in_damage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocalPlayerSpawned();
    
public:
    UFUNCTION(BlueprintCallable)
    void KillPlayer(bool NewResetRezTokens);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PawnInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallGripping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTheLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubmerged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldBroken() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReviving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparingToGlide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHitReact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformingTrick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIntangible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSafeSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputSuspended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNormalMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBlockingAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoverboarding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHookshotting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlideFullyEngaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrowning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashButtonPressed_Local() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmpReleased() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingShooter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAmpAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAllowed(ECombatActionRoute ActionRoute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InTownMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InNullWaterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InCharacterControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideFallDamageWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTempInvincibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSuperArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPerfectDodge() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAnimInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void GiveTempInvincibility(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetWieldedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetWeaponForDamage(const FBreakerDamage& Damage, bool bPreferActiveEquipedWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetVisibleMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStick_WorldRotated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UCameraComponent* GetSpectatorCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkelMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRezTokens();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetRangedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABreakerMod*> GetMods() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModifiedAmmoPickupCount(int32 OriginalCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetMeleeWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJumpPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlidePreparationRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlideChargeRemainingRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquipmentForActionRoute(const ECombatActionRoute ActionRoute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerEquipmentComponent* GetEquipmentComponentForActionRoute(const ECombatActionRoute ActionRoute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerEquipmentComponent* GetEquipmentComponentBySlot(const ECharacterEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquipmentByType(const EEquipmentType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquipmentBySlot(const ECharacterEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDashPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDashingIFrameSeconds(bool bIsPerfectDodge, bool bGetModified) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShieldPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRecoverableShieldPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRecoverableShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentCharacterClassTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetCurrentBiomeInfo(FGameplayTag& OutBiome, FGameplayTag& OutZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCosmeticSkelMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCharacterNormalizedSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerMod* FindMod(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipGearByTag(FGameplayTag GearTag, FGenericGearInfo GearInfo, ECharacterEquipmentSlot ForcedEquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnablePlayer(UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    void DrownPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisablePlayer(UObject* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidDashRecently(float WithinSeconds) const;
    
    UFUNCTION(BlueprintCallable)
    void ConvertDashToAttack(UAnimMontage* Montage, FRootMotionPlaySettings Settings);
    
    UFUNCTION(BlueprintCallable)
    void ClearTempInvincibility();
    
    UFUNCTION(BlueprintCallable)
    void ClearMods();
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraModifiers();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckForSafeSpace();
    
    UFUNCTION(BlueprintCallable)
    bool CanInteractWithStuff() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHeal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanConvertDashToAttack(float WithinSeconds) const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanAutoInteractWithStuff() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnConsumeGear();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_TeleportSucceded();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLocalTempCharacterVisuals(const UPlayerCharacterInfo* CharacterInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddSuperArmor(UObject* Token);
    
    UFUNCTION(BlueprintCallable)
    void AddMod(AActor* AddToActor, FModSpecializationInfo ModInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraModifier(const TSubclassOf<UBreakerCamModifier>& ModifierClass, const FBreakerCamModifierData& InitData, FName ID, bool bReplaceExisting);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool GetAttributeComponent(TScriptInterface<IAttributeContainerInterface>& Result) override PURE_VIRTUAL(GetAttributeComponent, return false;);
    
};

