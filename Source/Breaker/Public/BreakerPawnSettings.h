#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BreakerPawnSettings.generated.h"

class UPlayerCheatCodes;

UCLASS(Blueprintable, Config=Game)
class UBreakerPawnSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPlayerCheatCodes> CheatCodeClass;
    
    UBreakerPawnSettings();

};

