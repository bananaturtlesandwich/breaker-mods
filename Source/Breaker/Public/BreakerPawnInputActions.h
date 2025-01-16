#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BreakerInputAction.h"
#include "CameraPOV.h"
#include "CharacterMovementInput.h"
#include "CharacterMovementStick.h"
#include "OnPlayerInputActionStateChangedDelegate.h"
#include "BreakerPawnInputActions.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Input, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerPawnInputActions : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInputActionStateChanged OnContextSwitchStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionMappingVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakerInputAction> ActionMappings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FCharacterMovementInput RepInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FCameraPOV RepCamPov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterMovementStick RepStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterMovementStick LiveRepStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSceneControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMovementStick SceneControlStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SceneControlCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UBreakerPawnInputActions(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void TickStick_Server(const FCharacterMovementStick& Stick, const FCharacterMovementStick& LiveStick, float LocalTime);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void TickCamera_Server(const FCameraPOV& CamPOV, float LocalTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSceneControlMovement(FVector Axis);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneControlCamera(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalControl(float Time);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseExternalControl();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnJumped_Multicast(int32 WhichJump, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_Stick(const FCharacterMovementStick& Stick, const FCharacterMovementStick& LiveStick);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void InputTick_Server(const FCharacterMovementInput& aInput, float LocalTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHaveExternalControl();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastJump_Server(int32 WhichJump, FVector Impulse);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BotHasControl(bool bMovement, bool bCamera, bool bButtons) const;
    
};

