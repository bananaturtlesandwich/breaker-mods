#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Templates/SubclassOf.h"
#include "NavModifierVolumeComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UNavModifierVolumeComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UNavModifierVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavArea> GetAreaClass() const;
    
};

