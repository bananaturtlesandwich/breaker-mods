#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "TestMonkeySubsystem.generated.h"

class UTestMonkeyCompanionGameInstance;
class UTestMonkeyRunConfig;
class UTestMonkeyRunnerComponent;
class UWorld;

UCLASS(Blueprintable)
class UTestMonkeySubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionToken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTestMonkeyCompanionGameInstance*> LiveCompanionGames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTestMonkeyRunConfig* ActiveConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UTestMonkeyRunnerComponent*> Runners;
    
public:
    UTestMonkeySubsystem();

private:
    UFUNCTION(BlueprintCallable)
    bool TickCompanionGames(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopLocalSession();
    
    UFUNCTION(BlueprintCallable)
    void StartSessionWithConfig(UTestMonkeyRunConfig* RunConfig);
    
    UFUNCTION(BlueprintCallable)
    void ProcessCompanionGames(bool bCleanupDeadOnes);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldDestroyed(UWorld* TheWorld);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndPIE(const bool bIsSimulating);
    
public:
    UFUNCTION(BlueprintCallable)
    UTestMonkeyCompanionGameInstance* LaunchCompanionGameInstance(UTestMonkeyRunConfig* RunConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTestMonkeyRunConfig* GetActiveConfig() const;
    
};

