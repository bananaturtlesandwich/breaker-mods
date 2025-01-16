#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CutsceneManager_EventDelegate.h"
#include "CutsceneManager_SlowMo_EndPeak_EventDelegate.h"
#include "CutsceneManager_SlowMo_End_EventDelegate.h"
#include "CutsceneManager_SlowMo_StartPeak_EventDelegate.h"
#include "CutsceneManager_SlowMo_Start_EventDelegate.h"
#include "ECutsceneState.h"
#include "CutsceneManager.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UCutsceneManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECutsceneState CutsceneState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_Event OnCutsceneBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_Event OnCutsceneZoomBackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_Event OnCutsceneStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_UntilStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_UntilStart_OG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_RampUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_RampUp_OG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_Hold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_Hold_OG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_RampDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_RampDown_OG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation_Target;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_SlowMo_Start_Event OnSlowMoStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_SlowMo_StartPeak_Event OnSlowMoStartPeak;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_SlowMo_EndPeak_Event OnSlowMoEndPeak;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManager_SlowMo_End_Event OnSlowMoEnd;
    
    UCutsceneManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartCutsceneState(bool PauseAI);
    
    UFUNCTION(BlueprintCallable)
    bool StartCutscene(const FTransform& StartCamera, const float time_static, const float time_zoom_back, bool PauseAI);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDilation(const float time_until_start, const float time_ramp_up, const float time_hold, const float time_ramp_down, const float time_dilation_target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutsceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutsceneEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCutscenePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCutsceneTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    bool EndCutsceneState();
    
};

