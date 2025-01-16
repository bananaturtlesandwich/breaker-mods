#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "SpatialAudioInterface.h"
#include "BreakerSpatialAudioMeshComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerSpatialAudioMeshComponent : public UStaticMeshComponent, public ISpatialAudioInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetLocalPlayerIndoorAudioState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsolateOverlappingAudioMultiPositions;
    
public:
    UBreakerSpatialAudioMeshComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap_Internal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap_Internal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetSpatialAudioGameplayTags_Implementation();
    
    UFUNCTION(BlueprintCallable)
    bool CanSetLocalPlayerIndoorAudioState_Implementation();
    
    UFUNCTION(BlueprintCallable)
    bool CanIsolateOverlappingAudioMultiPositions_Implementation();
    

    // Fix for true pure virtual functions not being implemented
};

