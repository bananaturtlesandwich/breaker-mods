#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FederalReserveDocketEntry.h"
#include "FederalReserveRollResultDefinition.h"
#include "FederalReserveDocketAsset.generated.h"

class UFederalReserveRollModifier;

UCLASS(Blueprintable)
class UFederalReserveDocketAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFederalReserveDocketEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveRollModifier*> EntryModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFederalReserveRollResultDefinition> ResultDefinitions;
    
    UFederalReserveDocketAsset();

    UFUNCTION(BlueprintCallable)
    void ForceUpdateTextPreviews();
    
};

