#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "CrowdAgentSettingsInterface.h"
#include "HBL_CrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UHBL_CrowdFollowingComponent : public UCrowdFollowingComponent, public ICrowdAgentSettingsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveMomentumOnPathEnd;
    
public:
    UHBL_CrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMomentumRequestOnPathEndBP(const FAIRequestID inRequestStatus, const bool bInRequestStatus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetPreserveMomentumForPathRequest();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateCrowdAgentParamsOnServer() override PURE_VIRTUAL(UpdateCrowdAgentParamsOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGroupsToIgnoreOnServer(const int32 GroupFlags, const bool bUpdateAgent) override PURE_VIRTUAL(SetGroupsToIgnoreOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGroupsToAvoidOnServer(const int32 GroupFlags, const bool bUpdateAgent) override PURE_VIRTUAL(SetGroupsToAvoidOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdSlowdownAtGoalOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdSlowdownAtGoalOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdSeparationWeightOnServer(const float Weight, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdSeparationWeightOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdSeparationOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdSeparationOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdRotateToVelocityOnServer(const bool bEnable) override PURE_VIRTUAL(SetCrowdRotateToVelocityOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdPathOptimizationRangeOnServer(const float Range, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdPathOptimizationRangeOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdPathOffsetOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdPathOffsetOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdOptimizeVisibilityOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdOptimizeVisibilityOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdOptimizeTopologyOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdOptimizeTopologyOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdObstacleAvoidanceOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdObstacleAvoidanceOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdCollisionQueryRangeOnServer(const float Range, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdCollisionQueryRangeOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdAvoidanceRangeMultiplierOnServer(const float Multiplier, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdAvoidanceRangeMultiplierOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdAnticipateTurnsOnServer(const bool bEnable, const bool bUpdateAgent) override PURE_VIRTUAL(SetCrowdAnticipateTurnsOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCrowdAffectFallingVelocityOnServer(const bool bEnable) override PURE_VIRTUAL(SetCrowdAffectFallingVelocityOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAvoidanceGroupOnServer(const int32 GroupFlags, const bool bUpdateAgent) override PURE_VIRTUAL(SetAvoidanceGroupOnServer,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdSlowdownAtGoalEnabledOnServer() const override PURE_VIRTUAL(IsCrowdSlowdownAtGoalEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdSimulatioSuspendedOnServer() const override PURE_VIRTUAL(IsCrowdSimulatioSuspendedOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdSimulationEnabledOnServer() const override PURE_VIRTUAL(IsCrowdSimulationEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdSeparationEnabledOnServer() const override PURE_VIRTUAL(IsCrowdSeparationEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdSeparationActiveOnServer() const override PURE_VIRTUAL(IsCrowdSeparationActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdRotateToVelocityEnabledOnServer() const override PURE_VIRTUAL(IsCrowdRotateToVelocityEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdPathOffsetEnabledOnServer() const override PURE_VIRTUAL(IsCrowdPathOffsetEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdOptimizeVisibilityEnabledOnServer() const override PURE_VIRTUAL(IsCrowdOptimizeVisibilityEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdOptimizeTopologyEnabledOnServer() const override PURE_VIRTUAL(IsCrowdOptimizeTopologyEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdOptimizeTopologyActiveOnServer() const override PURE_VIRTUAL(IsCrowdOptimizeTopologyActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdObstacleAvoidanceEnabledOnServer() const override PURE_VIRTUAL(IsCrowdObstacleAvoidanceEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdObstacleAvoidanceActiveOnServer() const override PURE_VIRTUAL(IsCrowdObstacleAvoidanceActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdAnticipateTurnsEnabledOnServer() const override PURE_VIRTUAL(IsCrowdAnticipateTurnsEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdAnticipateTurnsActiveOnServer() const override PURE_VIRTUAL(IsCrowdAnticipateTurnsActiveOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCrowdAffectFallingVelocityEnabledOnServer() const override PURE_VIRTUAL(IsCrowdAffectFallingVelocityEnabledOnServer, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetGroupsToIgnoreOnServer() const override PURE_VIRTUAL(GetGroupsToIgnoreOnServer, return 0;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetGroupsToAvoidOnServer() const override PURE_VIRTUAL(GetGroupsToAvoidOnServer, return 0;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float GetCrowdSeparationWeightOnServer() const override PURE_VIRTUAL(GetCrowdSeparationWeightOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float GetCrowdPathOptimizationRangeOnServer() const override PURE_VIRTUAL(GetCrowdPathOptimizationRangeOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float GetCrowdCollisionQueryRangeOnServer() const override PURE_VIRTUAL(GetCrowdCollisionQueryRangeOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float GetCrowdAvoidanceRangeMultiplierOnServer() const override PURE_VIRTUAL(GetCrowdAvoidanceRangeMultiplierOnServer, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAvoidanceGroupOnServer() const override PURE_VIRTUAL(GetAvoidanceGroupOnServer, return 0;);
    
};

