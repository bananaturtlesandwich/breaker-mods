#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NewDayDelegateDelegate.h"
#include "StageManagerInitializedDelegateDelegate.h"
#include "BreakerStageManager.generated.h"

class UBreakerStageInfo;
class UBreakerStageManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerStageManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageManagerInitializedDelegate OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewDayDelegate OnNewDayTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DawnTimeNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuskTimeNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBreakerStageInfo> DefaultFallbackStageInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBreakerStageInfo* CurrentStageInfo;
    
public:
    UBreakerStageManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimeOfDayTickEnabled(bool bIsTicking);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTimeOfDay(float SecondsIntoDay);
    
    UFUNCTION(BlueprintCallable)
    void OverrideTotalStageTime(float InTotalStageTime);
    
    UFUNCTION(BlueprintCallable)
    void OverrideTotalDaySeconds(float InTotalDaySeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeOfDayTickEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UBreakerStageInfo* InStageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalStageSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDaySeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInSecondsUntilNight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInSecondsUntilDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedTimeOfDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeOfDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerStageInfo* GetCurrentStageInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBreakerStageManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AdjustTotalDaySeconds(float Amount);
    
};

