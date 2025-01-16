#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "AINavigationQueryFilterBase.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class BREAKER_API UAINavigationQueryFilterBase : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UAINavigationQueryFilterBase();

};

