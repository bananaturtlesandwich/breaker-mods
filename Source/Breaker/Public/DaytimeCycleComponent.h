#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DaytimeCycleConfiguration.h"
#include "ETimeProgressionFormatting.h"
#include "TimeOfDayTimedEventDelegate.h"
#include "DaytimeCycleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UDaytimeCycleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTimeProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTriggerTimeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTimeEventPredictions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeOfDayTimedEvent OnCurrentDayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeOfDayTimedEvent OnSunriseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeOfDayTimedEvent OnSunsetEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDaytimeCycleConfiguration ConfigurationDetails;
    
public:
    UDaytimeCycleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimeConfiguration(FDaytimeCycleConfiguration Config);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalizedTimeProgression(float NormalizedTime);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDayCycleTime(float DayCycleTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Now_24(int32& Hour, int32& Minutes, int32& Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Now(int32& Hour, int32& Minutes, int32& Seconds, bool& IsPM);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TriggerTimedEvent(uint8 Event);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EnableTimeProgression(bool Enabled, float TotalSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalProgressionSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalPredictedProgressionSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInSecondsUntilNight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInSecondsUntilDay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSunsetEventTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSunriseEventTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTimeProgressing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCurrentlyNighttime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCurrentlyDaytime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDayCycleLengthSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDayCycleLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTotalTimeProgression();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeProgressionRealSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeProgressionNormalized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeProgression();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDaytimeCycleConfiguration GetConfigurationDetails() const;
    
    UFUNCTION(BlueprintCallable)
    FString FormatCurrentTimeProgression(ETimeProgressionFormatting Formatting);
    
    UFUNCTION(BlueprintCallable)
    void EnableTimeProgression(bool Enabled, float TimeProgressionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvertInGameToRealTimeSeconds(float InGameSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateTimeProgression(int32 Hour, int32 Minutes, int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeProgression(float Hours);
    
};

