#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SocketDetails.h"
#include "SocketMapper.h"
#include "SocketManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API USocketManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocketMapper> SocketMappers;
    
public:
    USocketManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindRandomSocketTransform(FName SocketCategory, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindRandomSocket(FName SocketCategory, FSocketDetails& OutSocketDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindNearestSocketTransform(FName SocketCategory, FVector QueryPosition, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindNearestSocket(FName SocketCategory, FVector QueryPosition, FSocketDetails& OutSocketDetails) const;
    
};

