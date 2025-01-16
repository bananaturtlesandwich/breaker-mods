#pragma once
#include "CoreMinimal.h"
#include "BreakerScreenBase.h"
#include "EShopType.h"
#include "HubVendor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UHubVendor : public UBreakerScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShopType ShopType;
    
    UHubVendor();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupShop();
    
    UFUNCTION(BlueprintCallable)
    void SetShopType(EShopType ShopTypeIn);
    
};

