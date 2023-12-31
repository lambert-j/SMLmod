// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPowerConnectionComponent.h"
#include "FGPowerCircuit.h"

UFGPowerConnectionComponent::UFGPowerConnectionComponent() : Super() {
	this->mPowerInfo = nullptr;
	this->mPowerConnectionType = EPowerConnectionType::PCT_Default;
	this->mHasPower = false;
	this->mCircuitType = UFGPowerCircuit::StaticClass();
}
void UFGPowerConnectionComponent::SetPowerInfo( UFGPowerInfoComponent* powerInfo){ }
UFGPowerCircuit* UFGPowerConnectionComponent::GetPowerCircuit() const{ return nullptr; }
void UFGPowerConnectionComponent::OnCircuitIDChanged(){ }
void UFGPowerConnectionComponent::SetHasPower(bool hasPower){ }
void UFGPowerConnectionComponent::OnCircuitHasPowerChanged(bool hasPower){ }
