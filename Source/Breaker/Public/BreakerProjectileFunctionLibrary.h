#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "BreakerProjectileFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBreakerProjectileFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBreakerProjectileFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TraceWideProjectile(AActor* Shooter, FVector Location, FVector Direction, float Distance, float Radius, TArray<AActor*> IgnoreActors, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static bool TraceProjectile(AActor* Shooter, FVector Location, FVector Direction, float Distance, TArray<AActor*> IgnoreActors, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static bool MultiTraceWideProjectile(AActor* Shooter, FVector Location, FVector Direction, float Distance, float Radius, TArray<AActor*> IgnoreActors, TArray<FHitResult>& OutHits);
    
};

