#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameInstanceSubsystemInitializer.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UGameInstanceSubsystemInitializer : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameInstanceSubsystemInitializer();

};

