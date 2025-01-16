#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BiomeInfoProviderInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBiomeInfoProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IBiomeInfoProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void GetBiomeZone(FVector Location, FGameplayTag& OutBiome, FGameplayTag& OutZone) PURE_VIRTUAL(GetBiomeZone,);
    
};

