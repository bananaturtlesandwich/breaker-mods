#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AtmosphereOverrides.h"
#include "AtmosphereBlender.generated.h"

class APlayerCameraManager;
class UAtmosphereBlendVolume;
class UObject;

UCLASS(Blueprintable)
class BREAKER_API AAtmosphereBlender : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtmosphereOverrides DefaultAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtmosphereBlendVolume*> AtmosphereBlendVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
    AAtmosphereBlender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterAtmosphereBlendVolumes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGameViewLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetGameOrEditorViewLocation(UObject* WorldContextObject);
    
};

