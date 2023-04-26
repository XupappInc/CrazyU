// Separity.cpp : Este archivo contiene la función "main". La ejecución del
// programa comienza y termina ahí.
// #include <Windows.h>
//
// #ifdef _DEBUG
// HMODULE hinstLib = LoadLibrary(TEXT("Separity_Game_d"));
// #else
// HMODULE hinstLib = LoadLibrary(TEXT("Separity_Game"));
// #endif  // DEBUG

#include "EntityComponent\Entity.h"

// Componentes
#include "RenderEngine\Animator.h"
#include "RenderEngine\Camera.h"
#include "RenderEngine\Light.h"
#include "RenderEngine\MeshRenderer.h"
#include "RenderEngine\ParticleSystem.h"
#include "SoundEngine\AudioListener.h"
#include "SoundEngine\AudioSource.h"
#include "LuaEngine\Behaviour.h"
#include "PhysicsEngine\Collider.h"
#include "PhysicsEngine\RigidBody.h"
#include "UIEngine\Button.h"
#include "UIEngine\Panel.h"
#include "UIEngine\Text.h"
#include "EntityComponent\Transform.h"

// Managers
#include "SoundEngine\AudioManager.h"
#include "EntityComponent\EntityManager.h"
#include "LuaEngine\LuaManager.h"
#include "EntityComponent\ManagerManager.h"
#include "PhysicsEngine\PhysicsManager.h"
#include "RenderEngine\RenderManager.h"
#include "SceneEngine\SceneManager.h"
#include "SeparityExports\SeparityExports.h"
#include "UIEngine\UIManager.h"
// Utils
#include "ComponentEngine\GetComponentWrapper.h"
#include "SeparityUtils\Random.h"
#include "SeparityUtils\checkML.h"

#include <Windows.h>
#include <iostream>
#include <utility>
#include "GameStart.h"
// #include"Text.h"

const uint32_t FRAMERATE = 60;
const uint32_t FRAMETIME = 1000 / FRAMERATE;

int CrazyU::GameStart::initJuego() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Separity::CSeparityExports::initMotor();
	

	Separity::ManagerManager* mm = Separity::ManagerManager::getInstance();

	Separity::EntityManager* entityManager =
	    Separity::EntityManager::getInstance();

	Separity::UIManager* uiManager = Separity::UIManager::getInstance();

	Separity::AudioManager* auManager = Separity::AudioManager::getInstance();

	Separity::GetComponentWrapper::registerInLua();

	Separity::SceneManager* sceneMenager =
	    Separity::SceneManager::getInstance();
	sceneMenager->loadScene("scene4.lua");

	Separity::Entity* sinbad = entityManager->addEntity(Separity::_grp_GENERAL);
	sinbad->getComponent<Separity::Transform>()->translate({-15, 60, 12});
	sinbad->addComponent<Separity::MeshRenderer>()->setMesh("Sinbad.mesh");

	Separity::Entity* guile = entityManager->addEntity(Separity::_grp_GENERAL);
	guile->getComponent<Separity::Transform>()->translate({0, 10, 12});
	guile->getComponent<Separity::Transform>()->setScale(3);
	guile->addComponent<Separity::MeshRenderer>()->setMesh("guille.mesh");

	Separity::Entity* sinbad3 =
	    entityManager->addEntity(Separity::_grp_GENERAL);
	sinbad->addChild(sinbad3);
	sinbad3->getComponent<Separity::Transform>()->translate({0, 5, 0});
	sinbad3->addComponent<Separity::MeshRenderer>()->setMesh("Sinbad.mesh");

	Separity::colliderParams params;
	params.colShape = Separity::CUBE;
	params.height = 10;
	params.width = 5;
	params.depth = 5;
	params.isTrigger = false;

	sinbad->addComponent<Separity::Collider>(params);
	sinbad->addComponent<Separity::RigidBody>(Separity::DYNAMIC, 10);
	auto animSinbad = sinbad->addComponent<Separity::Animator>();

	Separity::Entity* button = entityManager->addEntity(Separity::_grp_GENERAL);
	Separity::Text* txt = button->addComponent<Separity::Text>(
	    "TextoPrueba", "fuentePrueba", 100, 100, 200, 50, "Holi",
	    Spyutils::Vector3(1, 1, 1));

	mm->initComponents();

	Separity::Camera* cam_cam =
	    Separity::RenderManager::getInstance()->getCamera();
	Separity::Entity* camera = cam_cam->getEntity();
	Separity::Transform* cam_tr = camera->getComponent<Separity::Transform>();

	uint32_t deltaTime = 0;

	while(!mm->quit()) {
		cam_cam = Separity::RenderManager::getInstance()->getCamera();
		camera = cam_cam->getEntity();
		cam_tr = camera->getComponent<Separity::Transform>();

		mm->update(deltaTime);
		mm->render();
	}

	mm->clean();

	return 0;
}

