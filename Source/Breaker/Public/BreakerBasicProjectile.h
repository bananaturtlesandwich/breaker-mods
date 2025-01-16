#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "BreakerProjectileShape.h"
#include "OnBasicProjectileCompletedLifetimeDelegate.h"
#include "OnBasicProjectileImpactedTargetsDelegate.h"
#include "Templates/SubclassOf.h"
#include "BreakerBasicProjectile.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerBasicProjectile : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBasicProjectileImpactedTargets OnImpactedTargets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBasicProjectileCompletedLifetime OnCompletedLifetime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpeedClamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyInitialSpeedAfterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpinSpeedClamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinAccelerationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySpinInitialSpeedAfterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoScanForImpacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerProjectileShape DamageShapeDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> DamageChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> RequiredClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoredClass;
    
public:
    UBreakerBasicProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ScanForImpactsInPlace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalLifetime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingLifetime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDamageWorldPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBreakerProjectileShape GetDamageShapeDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetDamageOrientation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* IgnoredActor);
    
};

