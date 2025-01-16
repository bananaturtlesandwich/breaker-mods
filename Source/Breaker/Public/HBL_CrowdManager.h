#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdManager.h"
#include "EAvoidanceAggression.h"
#include "HBL_CrowdManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class BREAKER_API UHBL_CrowdManager : public UCrowdManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidanceAggression AIVelocityRingAvoidanceQuality;
    
public:
    UHBL_CrowdManager();

protected:
    UFUNCTION(BlueprintCallable)
    void DigestAvoidanceConfig();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 ConvertAvoidanceEnumEntryToIndex(const EAvoidanceAggression avoidanceQualityLevel);
    
};

