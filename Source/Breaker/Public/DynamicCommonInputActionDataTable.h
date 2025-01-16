#pragma once
#include "CoreMinimal.h"
#include "CommonInputActionDataBase.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "DynamicCommonInputActionDataTable.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UDynamicCommonInputActionDataTable : public UDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadDirectlyFromDefaultInputIni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> DisplayNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> RequiresHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FilteredRows;
    
    UDynamicCommonInputActionDataTable();

protected:
    UFUNCTION(BlueprintCallable)
    void LoadActionsFromSource();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetKeyFromInputActionDataBase(FCommonInputActionDataBase InEntry, bool bGamepad, FKey& OutKey);
    
    UFUNCTION(BlueprintCallable)
    static void AssignKeyToInputActionDataBase(FCommonInputActionDataBase InEntry, FKey Key, FCommonInputActionDataBase& OutEntry);
    
};

