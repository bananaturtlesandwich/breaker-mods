#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SafeSpace.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USafeSpace : public UBoxComponent {
    GENERATED_BODY()
public:
    USafeSpace(const FObjectInitializer& ObjectInitializer);

};

