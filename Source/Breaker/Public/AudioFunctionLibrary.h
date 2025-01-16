#pragma once
#include "CoreMinimal.h"
#include "AkActionOnEventType.h"
#include "EAkCurveInterpolation.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "OnAudioMeshEmitterDataReadyDelegate.h"
#include "AudioFunctionLibrary.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UObject;

UCLASS(Blueprintable)
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDistanceProbeAkComponent(UAkComponent* ListenerAkComp, UAkComponent* DistanceProbeAkComp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlayBreakerMusicStinger(UObject* WorldContextObject, UAkAudioEvent* MusicStinger);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverlappingSpatialAudioObjectWithTags(AActor* Actor, FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static FName GetVoiceAkComponentTag();
    
    UFUNCTION(BlueprintCallable)
    static FName GetVoiceAkComponentSocketName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVoiceAkAudioComponent(AActor* Actor, UAkComponent*& AudioComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPhysicalSurfaceAkSwitch(const UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> PhysicalSurface, UAkSwitchValue*& AkSwitchValue);
    
    UFUNCTION(BlueprintCallable)
    static FName GetMuzzleAkComponentSocketName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMinAudioCombatRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxAudioCombatRank();
    
    UFUNCTION(BlueprintCallable)
    static FName GetMainAkComponentTag();
    
    UFUNCTION(BlueprintCallable)
    static FName GetMainAkComponentSocketName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainAkAudioComponent(AActor* Actor, UAkComponent*& AudioComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAudioCombatRankWithPOV_Validation(AActor* Actor, float& Out_Rank, bool& IsPointOfViewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAudioCombatRank(AActor* Actor, float& Out_Rank);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllMultiPositionAudioStaticMeshesAsync(UObject* WorldContextObject, const FOnAudioMeshEmitterDataReady& OutData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllAkComponentsInActor(const AActor* Actor, TArray<UAkComponent*>& AkComponents);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDurationMs, EAkCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteActionOnEventInComponent(const UAkComponent* AkComponent, const UAkAudioEvent* AudioEvent, const AkActionOnEventType ActionType, const int32 TransitionDuration, const EAkCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static void CompressTransformsByHorizontalGrid(TArray<FTransform> Transforms, TArray<FTransform>& CompressedTransforms, float GridSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanMultiplePositionAudioEmitterSpawnAtLocation(const UObject* WorldContextObject, const FVector Location);
    
};

