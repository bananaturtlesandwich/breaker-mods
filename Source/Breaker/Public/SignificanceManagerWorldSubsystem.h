#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "SignificanceManagerWorldSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Engine)
class USignificanceManagerWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceTickRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange SignificanceRangeNone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange SignificanceRangeLow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange SignificanceRangeMedium;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange SignificanceRangeHigh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SignificantActors;
    
public:
    USignificanceManagerWorldSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void WorldBeganPlay();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterSignificantActor(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickSignificanceManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterSignificantActor(AActor* Actor);
    
};

