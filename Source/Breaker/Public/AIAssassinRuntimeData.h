#pragma once
#include "CoreMinimal.h"
#include "AIAssassinRuntimeData.generated.h"

class AActor;
class ACMCharBase;

USTRUCT(BlueprintType)
struct BREAKER_API FAIAssassinRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACMCharBase> AssassinCharacterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> GlobalTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumTeleportRecoveryAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTargetIsInRestrictedZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerLastUpdateSeconds;
    
    FAIAssassinRuntimeData();
};

