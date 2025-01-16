#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvQueryTest_GameSideBase.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_NavAreaType.generated.h"

class UNavArea_GameBase;

UCLASS(Blueprintable)
class BREAKER_API UEnvQueryTest_NavAreaType : public UEnvQueryTest_GameSideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea_GameBase> NavAreaForMatch;
    
    UEnvQueryTest_NavAreaType();

};

