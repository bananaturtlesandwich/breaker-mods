#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RootMotionTarget.h"
#include "BreakerMotionWarpingComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerMotionWarpingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRootMotionTarget> Targets;
    
public:
    UBreakerMotionWarpingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTargetTransform(const FName TargetName, const FTransform& TargetTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetSceneComponent(const FName TargetName, USceneComponent* TargetSceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(const FName TargetName, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearTarget(const FName Target);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllTargets();
    
};

