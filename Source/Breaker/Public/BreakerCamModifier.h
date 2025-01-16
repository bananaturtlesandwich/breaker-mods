#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "BreakerCamModifierData.h"
#include "CameraDOF.h"
#include "CameraPOV.h"
#include "BreakerCamModifier.generated.h"

class ABreakerCam;
class ABreakerPawn;

UCLASS(Abstract, Blueprintable)
class UBreakerCamModifier : public UObject {
    GENERATED_BODY()
public:
    UBreakerCamModifier();

    UFUNCTION(BlueprintCallable)
    void TickModifier(const ABreakerCam* Camera, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start(const FBreakerCamModifierData& InitData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickModifier(const ABreakerCam* Camera, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart(const FBreakerCamModifierData& InitData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void ModifyViewTarget(const ABreakerCam* Camera, UPARAM(Ref) FTViewTarget& InOutViewTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void ModifyPOV(const ABreakerCam* Camera, UPARAM(Ref) FCameraPOV& InOutPOV) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void ModifyOrbit(const ABreakerCam* Camera, UPARAM(Ref) FCameraDOF& InOutDOF) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerCam* GetOwningCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisplacePOV(UPARAM(Ref) FCameraPOV& InOutPOV, const FVector& LocalOffset) const;
    
};

