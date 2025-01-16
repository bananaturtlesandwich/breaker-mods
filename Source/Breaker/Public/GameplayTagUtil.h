#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagUtil.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UGameplayTagUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayTagUtil();

    UFUNCTION(BlueprintCallable)
    static void SortGameplayTagArray(const TArray<FGameplayTag>& Array, TArray<FGameplayTag>& OutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeafTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyMatchingExplicitParentTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameplayTagsInContainer(const FGameplayTagContainer& Container, TArray<FGameplayTag>& OutTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetGameplayTagForString(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllGameplayTagsWithMatchingParentTag(FGameplayTag ParentTag, bool bLeavesOnly, TArray<FGameplayTag>& OutTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllGameplayTags(TArray<FGameplayTag>& OutTags);
    
};

