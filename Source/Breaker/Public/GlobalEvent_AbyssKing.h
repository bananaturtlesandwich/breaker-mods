#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AbyssKin_SpawnMeteors_EventDelegate.h"
#include "AbyssKing_Done_EventDelegate.h"
#include "AbyssKing_Emerge_EventDelegate.h"
#include "AbyssKing_FireMeteors_EventDelegate.h"
#include "AbyssKing_InPosition_EventDelegate.h"
#include "AbyssKing_Prepare_EventDelegate.h"
#include "AbyssKing_Return_EventDelegate.h"
#include "EGlobalEvent_AbyssKingState.h"
#include "GlobalEvent_AbyssKing.generated.h"

class AGlobalEvent_AbyssKing_Meteor;

UCLASS(Blueprintable)
class BREAKER_API AGlobalEvent_AbyssKing : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ContinousFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMeteorsToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMeteorsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMeteorsTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalEvent_AbyssKingState State;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Prepare_Event OnAbyssKingPrepare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Emerge_Event OnAbyssKingEmerge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_InPosition_Event OnAbyssKingInPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKin_SpawnMeteors_Event OnAbyssKingSpawnMeteors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_FireMeteors_Event OnAbyssKingFireMeteors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Return_Event OnAbyssKingReturn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbyssKing_Done_Event OnAbyssKingDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AbyssGateStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Emerge_TargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Perpare_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Emerge_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InPosition_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMeteors_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireWaitMeteors_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireMeteors_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Return_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGlobalEvent_AbyssKing_Meteor*> Meteors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGlobalEvent_AbyssKing_Meteor*> MeteorsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Meteor_SpawnHeight;
    
    AGlobalEvent_AbyssKing(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMeteorMPCData();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void ShowAllMeteors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LocateAbyssKingStartPosition();
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationInsideAbyssKingZone(FVector Loc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    void HideAllMeteors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalAbyssKingEventTime();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

