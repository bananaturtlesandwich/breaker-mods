#pragma once
#include "CoreMinimal.h"
#include "HMStatPropertyDescription.h"
#include "TestMonkeyClassProperties.generated.h"

USTRUCT(BlueprintType)
struct FTestMonkeyClassProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SharedParentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMStatPropertyDescription> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> OptionalEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideName;
    
    BREAKER_API FTestMonkeyClassProperties();
};

