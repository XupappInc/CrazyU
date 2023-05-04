#include "GameStart.h"

#include <SceneEngine/SceneManager.h> 

#include "VehicleMovementCreator.h"
#include "GameManagerCreator.h"
#include "SeparityUtils/checkML.h"

bool CrazyU::GameStart::gameStart() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//Añadir los creators de los componentes del juego

	Separity::SceneManager* sm = Separity::SceneManager::getInstance();

	sm->setFirstScene("menuScene.lua");

	sm->addComponentCreator("vehicleMovement", new CrazyU::VehicleMovementCreator());
	sm->addComponentCreator("manager", new CrazyU::GameManagerCreator());

	return true;
}

