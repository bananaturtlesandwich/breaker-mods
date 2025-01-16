#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AimingOrbitCameraEventDelegate.h"
#include "BreakerOrbitCamDelegate.h"
#include "AimingOrbitCameraComponent.generated.h"

class UAimingCameraData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAimingOrbitCameraComponent : public UActorComponent, public IBreakerOrbitCamDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimingOrbitCameraEvent OnCameraPushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimingOrbitCameraEvent OnCameraPopped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimingCameraData* CameraData;
    
public:
    UAimingOrbitCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool QueryAimingLocation(FVector& OutLocation, FHitResult& OutHit, float QueryDistance) const;
    

    // Fix for true pure virtual functions not being implemented
};

