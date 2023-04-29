#include "VehicleMovementCreator.h"

#include "VehicleMovement.h"
#include "EntityComponent/Entity.h"
#include "EntityComponent/Transform.h"
#include "RenderEngine/Camera.h"
#include "RenderEngine/RenderManager.h"

CrazyU::VehicleMovementCreator::VehicleMovementCreator() {}

void CrazyU::VehicleMovementCreator::registerInLua() {}

bool CrazyU::VehicleMovementCreator::createComponent(lua_State* L,
                                                     Separity::Entity* ent) {
	ent->addComponent<VehicleMovement>();

	return true;
}
