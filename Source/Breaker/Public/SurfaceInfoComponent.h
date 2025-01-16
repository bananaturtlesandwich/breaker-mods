#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurfaceInfo.h"
#include "SurfaceInfoChangedDelegate.h"
#include "SurfaceInfoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API USurfaceInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceInfoChanged SurfaceInfoChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckUpdateTimerSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceInfo SurfaceInfo;
    
    USurfaceInfoComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSurfaceInfo GetCurrentSurface() const;
    
};

