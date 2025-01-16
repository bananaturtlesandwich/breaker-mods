#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "AtmosphereBlendTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FAtmosphereBlendTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    BREAKER_API FAtmosphereBlendTickFunction();
};

template<>
struct TStructOpsTypeTraits<FAtmosphereBlendTickFunction> : public TStructOpsTypeTraitsBase2<FAtmosphereBlendTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

