
#include "EntityComponent\Entity.h"

// Componentes
#include "EntityComponent\Transform.h"
#include "LuaEngine\Behaviour.h"

#include "PhysicsEngine\RigidBody.h"
#include "RenderEngine\Animator.h"
#include "RenderEngine\Camera.h"
#include "RenderEngine\Light.h"
#include "RenderEngine\MeshRenderer.h"
#include "RenderEngine\ParticleSystem.h"
#include "SoundEngine\AudioListener.h"
#include "SoundEngine\AudioSource.h"
#include "UIEngine\Button.h"
#include "UIEngine\Panel.h"
#include "UIEngine\Text.h"
#include "VehicleMovement.h"
#include "GameManager.h"

//Creators
#include "GameManagerCreator.h"
#include "VehicleMovementCreator.h"

// Managers
#include "EntityComponent\EntityManager.h"
#include "EntityComponent\ManagerManager.h"
#include "InputEngine\InputManager.h"
#include "LuaEngine\LuaManager.h"
#include "PhysicsEngine\PhysicsManager.h"
#include "RenderEngine\RenderManager.h"
#include "SceneEngine\SceneManager.h"
#include "SeparityExports\SeparityExports.h"
#include "SoundEngine\AudioManager.h"
#include "UIEngine\UIManager.h"
// Utils
#include "ComponentEngine\GetComponentWrapper.h"
#include "GameStart.h"
#include "SeparityUtils\Random.h"
#include "SeparityUtils\checkML.h"
#include "SeparityUtils\VirtualTimer.h"
#include <Windows.h>
#include <iostream>
#include <utility>

//#include "lua.hpp"
//#include "LuaBridge.h"

const uint32_t FRAMERATE = 60;
const uint32_t FRAMETIME = 1000 / FRAMERATE;
using namespace Separity;
int CrazyU::GameStart::initJuego() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	GetComponentWrapper::createAllManagers();
	GetComponentWrapper::registerInLua();
	
	ManagerManager* mm = Separity::ManagerManager::getInstance();
	InputManager* inputManager = Separity::InputManager::getInstance();
	EntityManager* entityManager = Separity::EntityManager::getInstance();
	AudioManager* audioManager = Separity::AudioManager::getInstance();
	
	SceneManager* sceneManager = Separity::SceneManager::getInstance();

	sceneManager->loadScene("scene.lua");

	mm->initComponents();
	
	while(!mm->quit() && !InputManager::getInstance()->closeWindowEvent()) {
		
		if(inputManager->isKeyDown(InputManager::ESCAPE)) {
			mm->shutDown();
		} 
			
		mm->update(20);

		//deltaTime = timer->currTime();
		//int waitTime = FRAMETIME - deltaTime;

		//if(waitTime > 0)
		//	Sleep(waitTime);
	}

	mm->clean();

	GetComponentWrapper::closeAllManagers();

	//delete timer;

	return 0;
}

