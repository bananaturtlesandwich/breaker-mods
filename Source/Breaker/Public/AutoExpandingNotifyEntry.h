#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AutoExpandingNotifyEntry.generated.h"

class UAnimNotify;
class UAnimNotifyState;

USTRUCT(BlueprintType)
struct BREAKER_API FAutoExpandingNotifyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimNotify> NotifyClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimNotifyState> NotifyStateClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCreateNotify;
    
    FAutoExpandingNotifyEntry();
};

