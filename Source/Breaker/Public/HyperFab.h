#pragma once
#include "CoreMinimal.h"
#include "ADA.h"
#include "HyperFabParameters.h"
#include "HyperFabResetDatum.h"
#include "Templates/SubclassOf.h"
#include "HyperFab.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class AHyperFab : public AADA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugSettlingTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugSettlingTraceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHyperFabParameters> SettlingParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHyperFabResetDatum> ResetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceEndDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TraceAlongRotatedUpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlipTraceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogSettling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperFabParameters DefaultSettlingParameters;
    
    AHyperFab(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SettleHyperFab();
    
    UFUNCTION(BlueprintCallable)
    void ResetHyperFab();
    
    UFUNCTION(BlueprintCallable)
    void GatherResetData();
    
    UFUNCTION(BlueprintCallable)
    void ClearResetData();
    
};

