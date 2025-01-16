#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Chaos/ChaosEngineInterface.h"
#include "CharacterAudioSurfaceInterface.generated.h"

UINTERFACE(Blueprintable)
class UCharacterAudioSurfaceInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterAudioSurfaceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TEnumAsByte<EPhysicalSurface> GetCachedFootstepSurface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CacheFootstepSurface(const TEnumAsByte<EPhysicalSurface> Surface);
    
};

