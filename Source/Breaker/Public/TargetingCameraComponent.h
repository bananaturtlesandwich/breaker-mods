#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerOrbitCamDelegate.h"
#include "TargetingCameraComponent.generated.h"

class UZLockCameraData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTargetingCameraComponent : public UActorComponent, public IBreakerOrbitCamDelegate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZLockCameraData* CameraData;
    
public:
    UTargetingCameraComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

