#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Decker.h"
#include "OnTestDeckingReadyDelegate.h"
#include "PanDecker.generated.h"

UCLASS(Blueprintable)
class APanDecker : public ADecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTestDeckingReady OnTestDeckingReady;
    
    APanDecker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestDecking();
    
    UFUNCTION(BlueprintCallable)
    void TestAllTerrainPointsByZone();
    
    UFUNCTION(BlueprintCallable)
    void TestAllTerrainPoints();
    
    UFUNCTION(BlueprintCallable)
    void StartTryFinishTestDecking();
    
    UFUNCTION(BlueprintCallable)
    void MarkRows();
    
    UFUNCTION(BlueprintCallable)
    void ForceRemoveAllTestInstances();
    
    UFUNCTION(BlueprintCallable)
    void EditorSpawnTerrainProps();
    
    UFUNCTION(BlueprintCallable)
    void DeckingReport();
    
    UFUNCTION(BlueprintCallable)
    void DebugBiome(FGameplayTag TargetBiome, uint8 TargetVariant);
    
};

