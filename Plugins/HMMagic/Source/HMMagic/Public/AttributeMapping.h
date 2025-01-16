#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAttributeType.h"
#include "ENetworkReplicationAuthority.h"
#include "ENetworkReplicationType.h"
#include "AttributeMapping.generated.h"

USTRUCT(BlueprintType)
struct HMMAGIC_API FAttributeMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange InitialRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange InitialRangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkReplicationType ReplicationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkReplicationAuthority ReplicationAuthority;
    
    FAttributeMapping();
};

