#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "SpatialAudioInterface.generated.h"

UINTERFACE(Blueprintable)
class USpatialAudioInterface : public UInterface {
    GENERATED_BODY()
};

class ISpatialAudioInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetSpatialAudioGameplayTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSetLocalPlayerIndoorAudioState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanIsolateOverlappingAudioMultiPositions();
    
};

