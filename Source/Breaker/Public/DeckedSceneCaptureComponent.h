#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "DeckedSceneCaptureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UDeckedSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UDeckedSceneCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

