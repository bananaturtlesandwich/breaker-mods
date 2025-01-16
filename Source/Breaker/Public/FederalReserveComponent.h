#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "FederalReserveDocketEntry.h"
#include "OnFederalReserveActionTakenDelegate.h"
#include "FederalReserveComponent.generated.h"

class UFederalReserveComponent;
class UFederalReserveDocketAsset;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFederalReserveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFederalReserveDocketAsset* Docket;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFederalReserveActionTaken OnFederalReserveActionTaken;
    
    UFederalReserveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TakeActionsForRolledTags(FGameplayTagContainer RolledTags, FFederalReserveDocketContext Context, FFederalReserveActionResults& OutResults);
    
    UFUNCTION(BlueprintCallable)
    bool RequestMatchingEntriesInDocketInScoredOrder(const FFederalReserveDocketContext& Context, TArray<FFederalReserveDocketEntry>& OutEntries);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProcessContainerEventWithFederalReserve(const UObject* WorldContextObject, FFederalReserveDocketContext Context, FFederalReserveActionResults& OutResults);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessContainerEvent(FFederalReserveDocketContext Context, FFederalReserveActionResults& OutResults);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetFederalReserve(const UObject* WorldContextObject, UFederalReserveComponent*& OutFederalReserve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 DocketEntry_GetSpecificityScore(const FFederalReserveDocketEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DocketEntry_AreRequiredConditionsMet(const FFederalReserveDocketEntry& Entry, const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults);
    
};

