#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "QuestData.h"
#include "QuestTextData.h"
#include "QuestFunctionLibrary.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable, Config=Game)
class BREAKER_API UQuestFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestTextTablePath;
    
public:
    UQuestFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetQuestTextTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuestTextData GetQuestTextData(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetQuestTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FGameplayTag, int32> GetQuestRewardData(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuestData GetQuestData(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentRequiredQuestData(UObject* WorldContextObject, bool& Active, FQuestData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllRequiredQuestTags(TArray<FGameplayTag>& QuestTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllCurrentRequiredQuestData(UObject* WorldContextObject, bool& Active, TArray<FQuestData>& Data);
    
};

