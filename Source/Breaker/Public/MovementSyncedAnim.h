#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BreakerMovementDelegate.h"
#include "EBreakerSyncedAnimType.h"
#include "EMovementModeTransitionTag.h"
#include "MovementSyncedAnim.generated.h"

class ABreakerPawn;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerPawn, meta=(BlueprintSpawnableComponent))
class UMovementSyncedAnim : public UActorComponent, public IBreakerMovementDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundQueryDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrAnim;
    
public:
    UMovementSyncedAnim(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryPlay(UAnimMontage* Anim, FName SectionName, EBreakerSyncedAnimType SyncedAnimType, const FTransform& SyncTransform, float CrossFade, EMovementModeTransitionTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetCharacterPawn() const;
    

    // Fix for true pure virtual functions not being implemented
};

