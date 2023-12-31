// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPowerInfoComponent.h"
#include "Net/UnrealNetwork.h"

void UFGPowerInfoComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGPowerInfoComponent, mCircuitID);
	DOREPLIFETIME(UFGPowerInfoComponent, mTargetConsumption);
	DOREPLIFETIME(UFGPowerInfoComponent, mActualConsumption);
	DOREPLIFETIME(UFGPowerInfoComponent, mBaseProduction);
	DOREPLIFETIME(UFGPowerInfoComponent, mDynamicProductionCapacity);
	DOREPLIFETIME(UFGPowerInfoComponent, mDynamicProductionDemandFactor);
	DOREPLIFETIME(UFGPowerInfoComponent, mIsFuseTriggered);
	DOREPLIFETIME(UFGPowerInfoComponent, mIsFullBlast);
}
void UFGPowerInfoComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
UFGPowerInfoComponent::UFGPowerInfoComponent() : Super() {
	this->mCircuitID = -1;
	this->mTargetConsumption = 0.0;
	this->mActualConsumption = 0.0;
	this->mBaseProduction = 0.0;
	this->mDynamicProductionCapacity = 0.0;
	this->mDynamicProductionDemandFactor = 0.0;
	this->mBatteryInfo = nullptr;
	this->mIsFuseTriggered = false;
	this->mIsFullBlast = false;
	this->SetIsReplicatedByDefault(true);
}
void UFGPowerInfoComponent::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPowerInfoComponent::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPowerInfoComponent::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPowerInfoComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPowerInfoComponent::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGPowerInfoComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGPowerInfoComponent::ShouldSave_Implementation() const{ return bool(); }
UFGPowerCircuit* UFGPowerInfoComponent::GetPowerCircuit() const{ return nullptr; }
void UFGPowerInfoComponent::SetTargetConsumption(float newConsumption){ }
float UFGPowerInfoComponent::GetTargetConsumption() const{ return float(); }
void UFGPowerInfoComponent::SetMaximumTargetConsumption(float maxConsumption){ }
float UFGPowerInfoComponent::GetMaximumTargetConsumption() const{ return float(); }
float UFGPowerInfoComponent::GetActualConsumption() const{ return float(); }
void UFGPowerInfoComponent::SetBaseProduction(float newProduction){ }
float UFGPowerInfoComponent::GetBaseProduction() const{ return float(); }
void UFGPowerInfoComponent::SetDynamicProductionCapacity(float newProduction){ }
float UFGPowerInfoComponent::GetDynamicProductionCapacity() const{ return float(); }
float UFGPowerInfoComponent::GetDynamicProductionDemandFactor() const{ return float(); }
float UFGPowerInfoComponent::GetRegulatedDynamicProduction() const{ return float(); }
void UFGPowerInfoComponent::SetFullBlast(bool isFullBlast){ }
bool UFGPowerInfoComponent::IsFullBlast() const{ return bool(); }
void UFGPowerInfoComponent::SetCircuitID(int32 circuitID){ }
void UFGPowerInfoComponent::InitializeBatteryInfo(float powerStoreCapacity, float powerInputCapacity){ }
void UFGPowerInfoComponent::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void UFGPowerInfoComponent::SetHasPower(bool hasPower){ }
