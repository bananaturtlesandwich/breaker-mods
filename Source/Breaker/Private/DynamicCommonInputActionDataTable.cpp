#include "DynamicCommonInputActionDataTable.h"

UDynamicCommonInputActionDataTable::UDynamicCommonInputActionDataTable() {
    this->EntryPrefix = TEXT("Game-");
    this->bReadDirectlyFromDefaultInputIni = false;
}

void UDynamicCommonInputActionDataTable::LoadActionsFromSource() {
}

void UDynamicCommonInputActionDataTable::GetKeyFromInputActionDataBase(FCommonInputActionDataBase InEntry, bool bGamepad, FKey& OutKey) {
}

void UDynamicCommonInputActionDataTable::AssignKeyToInputActionDataBase(FCommonInputActionDataBase InEntry, FKey Key, FCommonInputActionDataBase& OutEntry) {
}


