#include "QuestFunctionLibrary.h"

UQuestFunctionLibrary::UQuestFunctionLibrary() {
}

UDataTable* UQuestFunctionLibrary::GetQuestTextTable() {
    return NULL;
}

FQuestTextData UQuestFunctionLibrary::GetQuestTextData(FGameplayTag Tag) {
    return FQuestTextData{};
}

UDataTable* UQuestFunctionLibrary::GetQuestTable() {
    return NULL;
}

TMap<FGameplayTag, int32> UQuestFunctionLibrary::GetQuestRewardData(FGameplayTag Tag) {
    return TMap<FGameplayTag, int32>();
}

FQuestData UQuestFunctionLibrary::GetQuestData(FGameplayTag Tag) {
    return FQuestData{};
}

void UQuestFunctionLibrary::GetCurrentRequiredQuestData(UObject* WorldContextObject, bool& Active, FQuestData& Data) {
}

void UQuestFunctionLibrary::GetAllRequiredQuestTags(TArray<FGameplayTag>& QuestTags) {
}

void UQuestFunctionLibrary::GetAllCurrentRequiredQuestData(UObject* WorldContextObject, bool& Active, TArray<FQuestData>& Data) {
}


