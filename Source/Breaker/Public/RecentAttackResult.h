#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EChoreographerAttackType.h"
#include "RecentAttackResult.generated.h"

USTRUCT(BlueprintType)
struct FRecentAttackResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EChoreographerAttackType attackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeStampSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDidHitTargetActor;
    
    BREAKER_API FRecentAttackResult();
};

