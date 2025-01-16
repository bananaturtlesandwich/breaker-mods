#include "GameplayTagUtil.h"

UGameplayTagUtil::UGameplayTagUtil() {
}

void UGameplayTagUtil::SortGameplayTagArray(const TArray<FGameplayTag>& Array, TArray<FGameplayTag>& OutArray) {
}

bool UGameplayTagUtil::IsLeafTag(FGameplayTag Tag) {
    return false;
}

bool UGameplayTagUtil::HasAnyMatchingExplicitParentTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag) {
    return false;
}

void UGameplayTagUtil::GetGameplayTagsInContainer(const FGameplayTagContainer& Container, TArray<FGameplayTag>& OutTags) {
}

FGameplayTag UGameplayTagUtil::GetGameplayTagForString(const FString& String) {
    return FGameplayTag{};
}

void UGameplayTagUtil::GetAllGameplayTagsWithMatchingParentTag(FGameplayTag ParentTag, bool bLeavesOnly, TArray<FGameplayTag>& OutTags) {
}

void UGameplayTagUtil::GetAllGameplayTags(TArray<FGameplayTag>& OutTags) {
}


