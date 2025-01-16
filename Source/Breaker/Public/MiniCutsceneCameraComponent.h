#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerOrbitCamDelegate.h"
#include "MiniCutsceneCameraComponent.generated.h"

class UMiniCutsceneCameraData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMiniCutsceneCameraComponent : public UActorComponent, public IBreakerOrbitCamDelegate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiniCutsceneCameraData* CameraData;
    
public:
    UMiniCutsceneCameraComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

