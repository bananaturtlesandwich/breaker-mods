#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitboxPreview.generated.h"

UCLASS(Blueprintable)
class AHitboxPreview : public AActor {
    GENERATED_BODY()
public:
    AHitboxPreview(const FObjectInitializer& ObjectInitializer);

};

