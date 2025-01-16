#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AudioEventsCollection.h"
#include "PawnAudioInterface.generated.h"

class UAkComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class BREAKER_API UPawnAudioInterface : public UInterface {
    GENERATED_BODY()
};

class BREAKER_API IPawnAudioInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void K2_GetAudioEventCollection(FAudioEventsCollection& Collection) const PURE_VIRTUAL(K2_GetAudioEventCollection,);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual void K2_GetAKAudioComponent(UAkComponent*& Result) const PURE_VIRTUAL(K2_GetAKAudioComponent,);
    
};

