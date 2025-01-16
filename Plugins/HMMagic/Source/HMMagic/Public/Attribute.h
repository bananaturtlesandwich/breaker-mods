#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EAttributeType.h"
#include "ENetworkReplicationAuthority.h"
#include "ENetworkReplicationType.h"
#include "Attribute.generated.h"

USTRUCT(BlueprintType)
struct HMMAGIC_API FAttribute {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag Tag;
    
    UPROPERTY()
    FText Name;
    
    UPROPERTY()
    FText Description;
    
    UPROPERTY()
    EAttributeType Type;
    
    UPROPERTY()
    float CurrentValue;
    
    UPROPERTY()
    FFloatRange CurrentValueRange;
    
    UPROPERTY()
    float DefaultValue;
    
    UPROPERTY()
    FFloatRange DefaultRange;
    
    UPROPERTY()
    FFloatRange DefaultRangeValue;
    
    UPROPERTY()
    ENetworkReplicationType ReplicationType;
    
    UPROPERTY()
    ENetworkReplicationAuthority ReplicationAuthority;
    
    FAttribute();
};

