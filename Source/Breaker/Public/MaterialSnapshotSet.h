#pragma once
#include "CoreMinimal.h"
#include "MaterialSnapshotArray.h"
#include "Templates/SubclassOf.h"
#include "MaterialSnapshotSet.generated.h"

class UMaterialStackComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FMaterialSnapshotSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    UMaterialStackComponent* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPrimitiveComponent> TargetComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FMaterialSnapshotArray> SnapshotMap;
    
    BREAKER_API FMaterialSnapshotSet();
};

