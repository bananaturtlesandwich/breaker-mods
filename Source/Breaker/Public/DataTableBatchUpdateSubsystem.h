#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "DataTableBatchUpdateSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDataTableBatchUpdateSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UDataTableBatchUpdateSubsystem();

};

