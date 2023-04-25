// Separity.cpp : Este archivo contiene la función "main". La ejecución del
// programa comienza y termina ahí.
// #include <Windows.h>
//
// #ifdef _DEBUG
// HMODULE hinstLib = LoadLibrary(TEXT("Separity_Game_d"));
// #else
// HMODULE hinstLib = LoadLibrary(TEXT("Separity_Game"));
// #endif  // DEBUG

#include "Entity.h"

// Componentes
#include "Animator.h"
#include "AudioListener.h"
#include "AudioSource.h"
#include "Behaviour.h"
#include "Button.h"
#include "Camera.h"
#include "Collider.h"
#include "Light.h"
#include "MeshRenderer.h"
#include "Panel.h"
#include "ParticleSystem.h"
#include "RigidBody.h"
#include "Text.h"
#include "Transform.h"

// Managers
#include "AudioManager.h"
#include "EntityManager.h"
#include "LuaManager.h"
#include "ManagerManager.h"
#include "PhysicsManager.h"
#include "RenderManager.h"
#include "SceneManager.h"
#include "UIManager.h"
// Utils
#include "GetComponentWrapper.h"
#include "Random.h"
#include "checkML.h"

#include <Windows.h>
#include <iostream>
#include <utility>
//#include"Text.h"

const uint32_t FRAMERATE = 60;
const uint32_t FRAMETIME = 1000 / FRAMERATE;

using namespace std;
using namespace Separity;
int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	ManagerManager* mm = Separity::ManagerManager::getInstance();

	EntityManager* entityManager = Separity::EntityManager::getInstance();
	UIManager* uiManager = Separity::UIManager::getInstance();

	GetComponentWrapper::registerInLua();

	SceneManager* sceneMenager = Separity::SceneManager::getInstance();
	sceneMenager->loadScene("scene4.lua");

	Entity* sinbad = entityManager->addEntity(_grp_GENERAL);
	sinbad->getComponent<Transform>()->translate({-15, 60, 12});
	sinbad->addComponent<MeshRenderer>()->setMesh("Sinbad.mesh");

	Entity* guile = entityManager->addEntity(_grp_GENERAL);
	guile->getComponent<Transform>()->translate({0, 10, 12});
	guile->getComponent<Transform>()->setScale(3);
	guile->addComponent<MeshRenderer>()->setMesh("guille.mesh");

	Entity* sinbad3 = entityManager->addEntity(_grp_GENERAL);
	sinbad->addChild(sinbad3);
	sinbad3->getComponent<Transform>()->translate({0, 5, 0});
	sinbad3->addComponent<MeshRenderer>()->setMesh("Sinbad.mesh");

	colliderParams params;
	params.colShape = CUBE;
	params.height = 10;
	params.width = 5;
	params.depth = 5;
	params.isTrigger = false;

	sinbad->addComponent<Collider>(params);
	sinbad->addComponent<RigidBody>(DYNAMIC, 10);
	auto animSinbad = sinbad->addComponent<Animator>();

	Entity* button = entityManager->addEntity(_grp_GENERAL);
	Text* txt =
	    button->addComponent<Text>("TextoPrueba", "fuentePrueba", 100, 100, 200,
	                               50, "Holi", Spyutils::Vector3(1, 1, 1));


	mm->initComponents();

	Camera* cam_cam = RenderManager::getInstance()->getCamera();
	Entity* camera = cam_cam->getEntity();
	Transform* cam_tr = camera->getComponent<Transform>();


	uint32_t deltaTime = 0;

	while(!mm->quit()) {
		cam_cam = RenderManager::getInstance()->getCamera();
		camera = cam_cam->getEntity();
		cam_tr = camera->getComponent<Transform>();

		mm->update(deltaTime);
		mm->render();
	}

	mm->clean();
	

	return 0;
}
