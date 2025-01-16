#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "VisualDebuggerEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FVisualDebuggerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Debugger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord ToggleHotKey;
    
    BREAKER_API FVisualDebuggerEntry();
};

