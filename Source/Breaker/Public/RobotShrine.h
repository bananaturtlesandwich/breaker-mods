#pragma once
#include "CoreMinimal.h"
#include "ADA.h"
#include "Templates/SubclassOf.h"
#include "RobotShrine.generated.h"

class AExtractionBeam;

UCLASS(Blueprintable)
class BREAKER_API ARobotShrine : public AADA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivatedRobotShine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AExtractionBeam* ExtractionBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AExtractionBeam> ExtractionBeamClass;
    
    ARobotShrine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ShrineDiscovered_Multicast();
    
    UFUNCTION(BlueprintCallable)
    void SaveShrineAsRunStartLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShrineDiscovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServerShrineHealingUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServerDisableShrineExtraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateRobotShrine();
    
    UFUNCTION(BlueprintCallable)
    void FindExtractionBeam();
    
    UFUNCTION(BlueprintCallable)
    void ActivateShrineExtraction();
    
    UFUNCTION(BlueprintCallable)
    void ActivateRobotShrine();
    
};

