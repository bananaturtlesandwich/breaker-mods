#include "BreakerProjectileFunctionLibrary.h"

UBreakerProjectileFunctionLibrary::UBreakerProjectileFunctionLibrary() {
}

bool UBreakerProjectileFunctionLibrary::TraceWideProjectile(AActor* Shooter, FVector Location, FVector Direction, float Distance, float Radius, TArray<AActor*> IgnoreActors, FHitResult& OutHit) {
    return false;
}

bool UBreakerProjectileFunctionLibrary::TraceProjectile(AActor* Shooter, FVector Location, FVector Direction, float Distance, TArray<AActor*> IgnoreActors, FHitResult& OutHit) {
    return false;
}

bool UBreakerProjectileFunctionLibrary::MultiTraceWideProjectile(AActor* Shooter, FVector Location, FVector Direction, float Distance, float Radius, TArray<AActor*> IgnoreActors, TArray<FHitResult>& OutHits) {
    return false;
}


