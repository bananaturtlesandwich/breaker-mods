#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "GameplayTagContainer.h"
#include "AnimMetaData_Tags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimMetaData_Tags : public UAnimMetaData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
public:
    UAnimMetaData_Tags();

};

