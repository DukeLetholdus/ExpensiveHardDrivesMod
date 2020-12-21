// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGNobeliskDetonator.h"
#include "FGDamageType.h"

AFGNobeliskDetonator::AFGNobeliskDetonator() : Super() {
	this->mDelayBetweenExplosions = 0.25;
	this->mMagSize = 5;
	this->mDamageTypeClass = UFGDamageType::StaticClass();
	this->mReloadTime = 1.5;
	this->mFireRate = 0.5;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->bReplicates = true;
}
void AFGNobeliskDetonator::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGNobeliskDetonator::ShouldSaveState() const{ return bool(); }
void AFGNobeliskDetonator::BeginPrimaryFire(){ }
void AFGNobeliskDetonator::EndPrimaryFire(){ }
void AFGNobeliskDetonator::Equip( AFGCharacterPlayer* character){ }
void AFGNobeliskDetonator::UnEquip(){ }
float AFGNobeliskDetonator::GetChargePct(){ return float(); }
void AFGNobeliskDetonator::SpawnExplosive(FTransform spawnTransform, int32 throwForce){ }
void AFGNobeliskDetonator::Server_SpawnExplosive_Implementation(FTransform spawnTransform, int32 throwForce){ }
bool AFGNobeliskDetonator::Server_SpawnExplosive_Validate(FTransform spawnTransform, int32 throwForce){ return bool(); }
void AFGNobeliskDetonator::StartDetonations(){ }
void AFGNobeliskDetonator::Server_StartDetonations_Implementation(){ }
bool AFGNobeliskDetonator::Server_StartDetonations_Validate(){ return bool(); }
void AFGNobeliskDetonator::ExecutePrimaryFire(){ }
void AFGNobeliskDetonator::Server_ExecutePrimaryFire_Implementation(){ }
bool AFGNobeliskDetonator::Server_ExecutePrimaryFire_Validate(){ return bool(); }
void AFGNobeliskDetonator::SecondaryFirePressed(){ }
void AFGNobeliskDetonator::OnSecondaryFirePressed_Implementation(){ }
void AFGNobeliskDetonator::ExecuteSecondaryFire(){ }
void AFGNobeliskDetonator::Server_ExecuteSecondaryFire_Implementation(){ }
bool AFGNobeliskDetonator::Server_ExecuteSecondaryFire_Validate(){ return bool(); }
void AFGNobeliskDetonator::OnViewportFocusChanged(bool isOpen, TSubclassOf<  UUserWidget > interactionClass){ }
void AFGNobeliskDetonator::AddEquipmentActionBindings(){ }
