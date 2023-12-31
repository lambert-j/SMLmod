// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneSubsystem.h"
#include "Net/UnrealNetwork.h"

AFGDroneSubsystem::AFGDroneSubsystem() : Super() {
	this->mDroneStationDefaultNamePrefix = TEXT("Drone Port");
}
AFGDroneSubsystem* AFGDroneSubsystem::Get(UWorld* world){ return nullptr; }
AFGDroneSubsystem* AFGDroneSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGDroneSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGDroneSubsystem, mStations);
}
void AFGDroneSubsystem::AddStation( AFGBuildableDroneStation* station){ }
void AFGDroneSubsystem::RemoveStation( AFGBuildableDroneStation* station){ }
void AFGDroneSubsystem::SearchStations(AFGDroneStationInfo* originStation, AFGDroneStationInfo* hostStation, FString filter, bool connectionsOnly, bool excludeOrigin, bool pairedFirst, bool includeEmptyStation, TArray< FDroneStationData >& result){ }
void AFGDroneSubsystem::Server_PairStations(AFGDroneStationInfo* origin, AFGDroneStationInfo* target){ }
void AFGDroneSubsystem::SetUniqueStationName(AFGDroneStationInfo* stationInfo, const FString& prefix) const{ }
bool AFGDroneSubsystem::TrySetStationName(AFGDroneStationInfo* stationInfo, const FString& name) const{ return bool(); }
