#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "AudioSurfaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UAudioSurfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
public:
    UAudioSurfaceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetSurfaceType() const;
    
};

