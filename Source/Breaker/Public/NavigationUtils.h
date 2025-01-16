#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "NavigationUtils.generated.h"

class UNavigationUtils;
class UObject;

UCLASS(Blueprintable, Transient, Config=Game)
class BREAKER_API UNavigationUtils : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UNavigationUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNavigationUtils* GetNavigationUtils(const UObject* WorldContextObject);
    
};

