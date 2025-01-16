#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "BreakerProjectileShape.h"
#include "OnImpactedFlyByTargetsDelegate.h"
#include "OnReachedHomingTargetDelegate.h"
#include "Templates/SubclassOf.h"
#include "BreakerHomingProjectile.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerHomingProjectile : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImpactedFlyByTargets OnImpactedFlyByTargets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedHomingTarget OnReachedHomingTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerProjectileShape DamageShapeDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> DamageChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> RequiredClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoredClass;
    
public:
    UBreakerHomingProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(AActor* NewTarget, FName OptionalSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectileActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomingTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDamageWorldPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBreakerProjectileShape GetDamageShapeDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetDamageOrientation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* IgnoredActor);
    
};

