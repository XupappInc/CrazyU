#include "GameStart.h"

#include <SceneEngine/SceneManager.h> 
#include <EntityComponent/CCreator.h>
#include <LuaEngine/LuaManager.h>

#include "VehicleMovementCreator.h"
#include "GameManagerCreator.h"

#include <iostream>


int CrazyU::GameStart::initJuego() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//A�adir los creators de los componentes del juego

	std::cout << "Añadiendo los componentes del juego\n";

	Separity::SceneManager* sm = Separity::SceneManager::getInstance();

	//sm->addComponentCreator("vehicleMovement", new CrazyU::VehicleMovementCreator());
	//sm->addComponentCreator("manager", new CrazyU::GameManagerCreator());


	//Separity::LuaManager::getInstance()->start();
	//sm->start();

	return 0;
}

