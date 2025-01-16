#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EAttackChannel.h"
#include "BTS_UpdateCombatBBOnFinish.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTS_UpdateCombatBBOnFinish : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeAttackChannelBeforeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackChannel AttackChannelDataSource;
    
public:
    UBTS_UpdateCombatBBOnFinish();

};

