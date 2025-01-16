#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AkMultiPositionType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AudioDebugInterface.h"
#include "BreakerAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerAkComponent : public UAkComponent, public IAudioDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DebugColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiPositioned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> MultiPositionTransforms;
    
public:
    UBreakerAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBreakerMultiplePositions(const TArray<FTransform>& AudioPositions, AkMultiPositionType MultiPositionType);
    

    // Fix for true pure virtual functions not being implemented
};

