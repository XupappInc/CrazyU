#include "GameManagerCreator.h"

#include "GameManager.h"
#include "EntityComponent\Entity.h"
#include "LuaEngine\LuaManager.h"

//#include <lua.hpp>
//#include <LuaBridge/LuaBridge.h>

CrazyU::GameManagerCreator::GameManagerCreator() {}

CrazyU::GameManagerCreator::~GameManagerCreator() {}

void CrazyU::GameManagerCreator::registerInLua() {}

bool CrazyU::GameManagerCreator::createComponent(lua_State* L,
                                                 Separity::Entity* ent) {
	ent->addComponent<GameManager>();

	return true;
}
