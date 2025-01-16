#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "TaggedPropertiesInterface.generated.h"

UINTERFACE(Blueprintable)
class UTaggedPropertiesInterface : public UInterface {
    GENERATED_BODY()
};

class ITaggedPropertiesInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTagProperty(const FGameplayTag& PropertyTag, const FGameplayTag& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStringProperty(const FGameplayTag& PropertyTag, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNumericProperty(const FGameplayTag& PropertyTag, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetTagProperty(const FGameplayTag& PropertyTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetStringProperty(const FGameplayTag& PropertyTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNumericProperty(const FGameplayTag& PropertyTag);
    
};

