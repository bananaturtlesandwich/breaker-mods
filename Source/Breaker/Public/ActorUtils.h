#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorUtils.generated.h"

class AActor;
class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class UActorUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorUtils();

    UFUNCTION(BlueprintCallable)
    static void UseWithCaution_DynamicRegisterComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActiveInterfaceImplementingObjects(AActor* Actor, UClass* Interface, TArray<UObject*>& OutObjects);
    
};

