#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CompanionGameInstanceEventDelegate.h"
#include "TestMonkeyCompanionGameInstance.generated.h"

class UTestMonkeyRunConfig;

UCLASS(Blueprintable)
class UTestMonkeyCompanionGameInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHintSaveWindowPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HintWindowPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideWorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTestMonkeyRunConfig* RunConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString FinalCommandLineArgs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionGameInstanceEvent OnProcessExit;
    
    UTestMonkeyCompanionGameInstance();

    UFUNCTION(BlueprintCallable)
    void StartProcess();
    
    UFUNCTION(BlueprintCallable)
    void KillProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReturnCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProcessId() const;
    
};

