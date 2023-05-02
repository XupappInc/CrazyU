#include "GameStart.h"

#include <SceneEngine/SceneManager.h> 

#include "VehicleMovementCreator.h"
#include "GameManagerCreator.h"

bool CrazyU::GameStart::gameStart() {

	//Añadir los creators de los componentes del juego

	Separity::SceneManager* sm = Separity::SceneManager::getInstance();

	sm->setFirstScene("scene.lua");

	sm->addComponentCreator("vehicleMovement", new CrazyU::VehicleMovementCreator());
	sm->addComponentCreator("manager", new CrazyU::GameManagerCreator());

	return true;
}

