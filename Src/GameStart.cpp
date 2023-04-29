
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


using namespace Separity;
int CrazyU::GameStart::initJuego() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//Añadir los creators de los componentes del juego

	return 0;
}

