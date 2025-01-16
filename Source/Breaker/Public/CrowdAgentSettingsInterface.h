#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CrowdAgentSettingsInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UCrowdAgentSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class ICrowdAgentSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void UpdateCrowdAgentParamsOnServer() PURE_VIRTUAL(UpdateCrowdAgentParamsOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetGroupsToIgnoreOnServer(const int32 GroupFlags, const bool bUpdateAgent) PURE_VIRTUAL(SetGroupsToIgnoreOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetGroupsToAvoidOnServer(const int32 GroupFlags, const bool bUpdateAgent) PURE_VIRTUAL(SetGroupsToAvoidOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdSlowdownAtGoalOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdSlowdownAtGoalOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdSeparationWeightOnServer(const float Weight, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdSeparationWeightOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdSeparationOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdSeparationOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdRotateToVelocityOnServer(const bool bEnable) PURE_VIRTUAL(SetCrowdRotateToVelocityOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdPathOptimizationRangeOnServer(const float Range, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdPathOptimizationRangeOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdPathOffsetOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdPathOffsetOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdOptimizeVisibilityOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdOptimizeVisibilityOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdOptimizeTopologyOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdOptimizeTopologyOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdObstacleAvoidanceOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdObstacleAvoidanceOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdCollisionQueryRangeOnServer(const float Range, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdCollisionQueryRangeOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdAvoidanceRangeMultiplierOnServer(const float Multiplier, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdAvoidanceRangeMultiplierOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdAnticipateTurnsOnServer(const bool bEnable, const bool bUpdateAgent) PURE_VIRTUAL(SetCrowdAnticipateTurnsOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetCrowdAffectFallingVelocityOnServer(const bool bEnable) PURE_VIRTUAL(SetCrowdAffectFallingVelocityOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void SetAvoidanceGroupOnServer(const int32 GroupFlags, const bool bUpdateAgent) PURE_VIRTUAL(SetAvoidanceGroupOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdSlowdownAtGoalEnabledOnServer() const PURE_VIRTUAL(IsCrowdSlowdownAtGoalEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdSimulatioSuspendedOnServer() const PURE_VIRTUAL(IsCrowdSimulatioSuspendedOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdSimulationEnabledOnServer() const PURE_VIRTUAL(IsCrowdSimulationEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdSeparationEnabledOnServer() const PURE_VIRTUAL(IsCrowdSeparationEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdSeparationActiveOnServer() const PURE_VIRTUAL(IsCrowdSeparationActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdRotateToVelocityEnabledOnServer() const PURE_VIRTUAL(IsCrowdRotateToVelocityEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdPathOffsetEnabledOnServer() const PURE_VIRTUAL(IsCrowdPathOffsetEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdOptimizeVisibilityEnabledOnServer() const PURE_VIRTUAL(IsCrowdOptimizeVisibilityEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdOptimizeTopologyEnabledOnServer() const PURE_VIRTUAL(IsCrowdOptimizeTopologyEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdOptimizeTopologyActiveOnServer() const PURE_VIRTUAL(IsCrowdOptimizeTopologyActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdObstacleAvoidanceEnabledOnServer() const PURE_VIRTUAL(IsCrowdObstacleAvoidanceEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdObstacleAvoidanceActiveOnServer() const PURE_VIRTUAL(IsCrowdObstacleAvoidanceActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdAnticipateTurnsEnabledOnServer() const PURE_VIRTUAL(IsCrowdAnticipateTurnsEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdAnticipateTurnsActiveOnServer() const PURE_VIRTUAL(IsCrowdAnticipateTurnsActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsCrowdAffectFallingVelocityEnabledOnServer() const PURE_VIRTUAL(IsCrowdAffectFallingVelocityEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual int32 GetGroupsToIgnoreOnServer() const PURE_VIRTUAL(GetGroupsToIgnoreOnServer, return 0;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual int32 GetGroupsToAvoidOnServer() const PURE_VIRTUAL(GetGroupsToAvoidOnServer, return 0;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual float GetCrowdSeparationWeightOnServer() const PURE_VIRTUAL(GetCrowdSeparationWeightOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual float GetCrowdPathOptimizationRangeOnServer() const PURE_VIRTUAL(GetCrowdPathOptimizationRangeOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual float GetCrowdCollisionQueryRangeOnServer() const PURE_VIRTUAL(GetCrowdCollisionQueryRangeOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual float GetCrowdAvoidanceRangeMultiplierOnServer() const PURE_VIRTUAL(GetCrowdAvoidanceRangeMultiplierOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetAvoidanceGroupOnServer() const PURE_VIRTUAL(GetAvoidanceGroupOnServer, return 0;);
    
};

