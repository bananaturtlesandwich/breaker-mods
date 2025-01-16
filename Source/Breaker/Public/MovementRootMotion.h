#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BreakerMovementDelegate.h"
#include "RootMotionPlaySettings.h"
#include "MovementRootMotion.generated.h"

class ABreakerPawn;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerPawn, meta=(BlueprintSpawnableComponent))
class UMovementRootMotion : public UActorComponent, public IBreakerMovementDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlideDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrAnim;
    
public:
    UMovementRootMotion(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryPlay(UAnimMontage* Anim, FRootMotionPlaySettings Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicRootMotionScale(float NewScale);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void HaltRootMotion_Server(FVector AtLocation, int32 MovementFingerprint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HaltRootMotion_Multicast(FVector AtLocation, int32 MovementFingerprint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetCharacterPawn() const;
    

    // Fix for true pure virtual functions not being implemented
};

