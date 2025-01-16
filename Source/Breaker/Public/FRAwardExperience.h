#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveResultAction.h"
#include "FRAwardExperience.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRAwardExperience : public UFederalReserveResultAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Rewards;
    
    UFRAwardExperience();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardExperienceToLocalPlayer(const UObject* WorldContextObject, FGameplayTag Source, int32 CountMultiplier, int32 OverrideAmount);
    
};

