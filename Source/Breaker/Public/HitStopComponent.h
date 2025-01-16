#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "HitStopDetails.h"
#include "HitStopComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UHitStopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHitStopTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHitStopDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHitStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGlobalTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HitStopFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfFreezeFramesOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DilationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DurationModifier;
    
    UHitStopComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPassiveLocalTimeDilation(const FString& Key, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void RemovePassiveLocalTimeDilation(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHitStopFollower(AActor* FollowingActor, float NewTimeDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveLocalTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeForFrameCount(int32 NumFrames);
    
    UFUNCTION(BlueprintCallable)
    void AddHitStopFollower(AActor* FollowingActor);
    
    UFUNCTION(BlueprintCallable)
    void ActivateHitStopDetails(AActor* OtherActor, FHitStopDetails HitStopDetails, float OtherModifier);
    
    UFUNCTION(BlueprintCallable)
    void ActivateDefaultHitStop(AActor* OtherActor, float OtherModifier);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCustomHitStop(AActor* OtherActor, float CustomDilation, float CustomDuration, float OtherModifier);
    
};

