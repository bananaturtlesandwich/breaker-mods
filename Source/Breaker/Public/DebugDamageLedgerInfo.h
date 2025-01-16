#pragma once
#include "CoreMinimal.h"
#include "DamageLedger.h"
#include "DebugDamageLedgerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDebugDamageLedgerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageLedger Incident;
    
    BREAKER_API FDebugDamageLedgerInfo();
};

