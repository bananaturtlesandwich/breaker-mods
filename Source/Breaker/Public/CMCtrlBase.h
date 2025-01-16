#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "AIAssassinRuntimeData.h"
#include "CustomNavigationPropertiesQueryInterface.h"
#include "OnCMCtrlBlackboardInitializedDelegate.h"
#include "CMCtrlBase.generated.h"

class AActor;
class ACMCharBase;
class UAINavigationQueryFilter_CustomPath;
class UBlackboardComponent;
class UBlackboardData;
class UHBL_CrowdFollowingComponent;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class BREAKER_API ACMCtrlBase : public AAIController, public ICustomNavigationPropertiesQueryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSmoothRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCMCtrlBlackboardInitialized OnBlackboardInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAINavigationQueryFilter_CustomPath> AINavQueryFilterCustomPathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAINavigationQueryFilter_CustomPath* AINavQueryFilterCustomPath;
    
public:
    ACMCtrlBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateAINavQueryFilterCustomPath();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ToggleCrowdFollowingAvoidance(const bool bEnableCrowdFollowingAvoidance);
    
    UFUNCTION(BlueprintCallable)
    void ReInitBaseBlackboardData_BP();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitBlackboardData(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    AActor* OnDetermineAssassinTarget(ACMCharBase* inAssassinBaseCMChar, const FAIAssassinRuntimeData& inAssassinRuntimeData, const TArray<FAIAssassinRuntimeData>& inAllAssassinRuntimeMetaData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlackboardInitializedBP(UBlackboardComponent* inBlackboardComponent, UBlackboardData* BlackboardAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathDestination();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UAINavigationQueryFilter_CustomPath* GetCustomPathNavQueryFilterOnServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentPathTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPathFollowingComponent* GetAIPathFollowingComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHBL_CrowdFollowingComponent* GetAICrowdFollowingComponent();
    
    UFUNCTION(BlueprintCallable)
    bool CanUseCrowdManager();
    

    // Fix for true pure virtual functions not being implemented
};

