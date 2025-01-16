#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "BreakerWorldSettings.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ABreakerWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTownWorld;
    
    ABreakerWorldSettings(const FObjectInitializer& ObjectInitializer);

};

