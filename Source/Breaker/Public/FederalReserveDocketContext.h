#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FedVirtualTargetOptions.h"
#include "FederalReserveDocketContext.generated.h"

class AActor;
class UFederalReserveComponent;

USTRUCT(BlueprintType)
struct FFederalReserveDocketContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueryReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LocationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFederalReserveComponent* FederalReserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFedVirtualTargetOptions VirtualTargetOptions;
    
    BREAKER_API FFederalReserveDocketContext();
};

