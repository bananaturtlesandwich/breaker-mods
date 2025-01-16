#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAttackChannel.h"
#include "BTTask_UpdateSyncedCombatBB.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTTask_UpdateSyncedCombatBB : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeAttackChannelBeforeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackChannel AttackChannelDataSource;
    
public:
    UBTTask_UpdateSyncedCombatBB();

};

