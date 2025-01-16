#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "BlueprintSubsystemInitializer.generated.h"

class UGameInstanceSubsystem;
class UWorldSubsystem;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BREAKER_API UBlueprintSubsystemInitializer : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameInstanceSubsystem>> GameInstanceSubsystems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWorldSubsystem>> WorldSubsystems;
    
    UBlueprintSubsystemInitializer();

};

