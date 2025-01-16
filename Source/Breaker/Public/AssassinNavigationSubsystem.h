#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AIAssassinRuntimeData.h"
#include "AssassinNavPathingGrid.h"
#include "AssassinNavigationSubsystem.generated.h"

class AActor;
class ACMCharBase;
class UAssassinNavigationSubsystem;
class UObject;

UCLASS(Blueprintable, Transient)
class BREAKER_API UAssassinNavigationSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAIAssassinRuntimeData> AssassinRuntimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAssassinRuntimeData InvalidAssassinRunTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlueprintCustomTargetAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAssassinNavPathingGrid AssassinDefaultPathingGrid;
    
public:
    UAssassinNavigationSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateChoreographryComponentTargetDataForAssassin(FAIAssassinRuntimeData& inAssassinInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SetAssassinPlayerTarget(FAIAssassinRuntimeData& inAssassinInfo, const AActor* inPlayerTargetAsActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAndInitializeAssassinRuntimeMetaData(const ACMCharBase* assassinToRegister, bool bIsInitialPoolInit);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnAssassinRemovedFromGame(ACMCharBase* inAssassinBaseCMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAssassinRetiredToPool(ACMCharBase* inAssassinBaseCMChar);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool HasValidCurrentTarget(ACMCharBase* inAssassin);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FAIAssassinRuntimeData GetAssassinRuntimeData(ACMCharBase* inAssassin, UPARAM(Ref) bool& bFoundAssassinRuntimeData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAssassinNavigationSubsystem* GetAssassinNavigationSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* GetAssassinCurrentTarget(ACMCharBase* inAssassin);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* FindGlobalTargetForAssassin(UPARAM(Ref) FAIAssassinRuntimeData& outAssassinInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* DetermineAssassinTarget(const ACMCharBase* inAssassinRequiringTarget);
    
};

