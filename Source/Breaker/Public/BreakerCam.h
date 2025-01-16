#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/Scene.h"
#include "GameplayTagContainer.h"
#include "BreakerCameraShakeDefinition.h"
#include "BreakerCameraShakeParams.h"
#include "Templates/SubclassOf.h"
#include "BreakerCam.generated.h"

class IBreakerOrbitCamDelegate;
class UBreakerOrbitCamDelegate;
class UCameraShakeBase;
class UCurveFloat;
class UUserWidget;

UCLASS(Abstract, Blueprintable, NonTransient)
class ABreakerCam : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFlySpeedFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFlySpeedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestPitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestTeleportOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseShakeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseShakeAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BaseShakeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayBetweenCameraShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakerCameraShakeDefinition> CameraShakeDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings CustomPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DebugMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* DebugMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBreakerOrbitCamDelegate> OverridePawnOrbitCam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCurve;
    
public:
    ABreakerCam(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTestCameraEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    UCameraShakeBase* PlayBreakerCameraShakeWithParams(const FGameplayTag& CameraShakeID, const FBreakerCameraShakeParams& InParams, bool bForcePlay);
    
    UFUNCTION(BlueprintCallable)
    UCameraShakeBase* PlayBreakerCameraShakeAssetWithParams(TSubclassOf<UCameraShakeBase> InCameraShakeClass, const FBreakerCameraShakeParams& InParams, bool bForcePlay);
    
    UFUNCTION(BlueprintCallable)
    UCameraShakeBase* PlayBreakerCameraShake(const FGameplayTag& CameraShakeID, bool bForcePlay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTestCameraEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlendingOrbit() const;
    
};

