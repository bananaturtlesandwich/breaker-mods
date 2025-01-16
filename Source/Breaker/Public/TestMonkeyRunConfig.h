#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnrealExePath.h"
#include "SimpleNetEmulationSettings.h"
#include "TestMonkeyRunConfigData.h"
#include "TestMonkeyRunConfig.generated.h"

UCLASS(Blueprintable, PerObjectConfig, Config=Game)
class UTestMonkeyRunConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecute;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnrealExePath TargetExecutable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomExecutableLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExecCommands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionExecCommands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectNetStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectFuncStats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAcceptWidgets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayTheGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoHostCreate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoClientJoin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseGameOnFinish;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameExecutionTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleNetEmulationSettings NetEmulationSettings;
    
    UTestMonkeyRunConfig();

    UFUNCTION(BlueprintCallable)
    void SetFromConfigData(FTestMonkeyRunConfigData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GenerateNetworkEmulationCommands(const FSimpleNetEmulationSettings& NetSettings, bool bForConsole, TArray<FString>& OutCommands);
    
};

