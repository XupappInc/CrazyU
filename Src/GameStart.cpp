
#include "EntityComponent\Entity.h"

// Componentes
#include "EntityComponent\Transform.h"
#include "LuaEngine\Behaviour.h"
#include "PhysicsEngine\Collider.h"
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

const uint32_t FRAMERATE = 60;
const uint32_t FRAMETIME = 1000 / FRAMERATE;
using namespace Separity;
int CrazyU::GameStart::initJuego() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	GetComponentWrapper::createAllManagers();

	GetComponentWrapper::registerInLua();
	
	//RenderManager* rm = RenderManager::getInstance();
	ManagerManager* mm = Separity::ManagerManager::getInstance();
	InputManager* inputManager = Separity::InputManager::getInstance();
	EntityManager* entityManager = Separity::EntityManager::getInstance();
	AudioManager* audioManager = Separity::AudioManager::getInstance();
	;
	
	SceneManager* sceneMenager = Separity::SceneManager::getInstance();
	sceneMenager->loadScene("menuScene.lua");

	// Entity* MusicInstance = entityManager->addEntity(_grp_GENERAL);

	Entity* listener = entityManager->addEntity(_grp_GENERAL);
	 auto* sonido = listener->addComponent<AudioSource>("Assets//callmemaybe.mp3",
	                                                    "callmemaybe", false);
	audioManager->playAudio(sonido, 1000,1000);
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
	
	Camera* cam_cam = RenderManager::getInstance()->getCamera();
	/*Entity* camera = cam_cam->getEntity();
	Transform* cam_tr = camera->getComponent<Transform>();*/

	// BUS
	Entity* coche = entityManager->addEntity(_grp_GENERAL);
	Transform* cocheTr = coche->getComponent<Transform>();
	cocheTr->translate({0, 10, 0});
	cocheTr->setScale(1);
	coche->addComponent<MeshRenderer>()->setMesh("Bus1.mesh");
	/*VehicleMovement* coche_vehiculo =
	    coche->addComponent<VehicleMovement>(cam_tr);*/

	colliderParams paramsCoche;
	paramsCoche.colShape = CUBE;
	paramsCoche.height = 2;
	paramsCoche.width = 2;
	paramsCoche.depth = 3;
	paramsCoche.isTrigger = false;

	coche->addComponent<Collider>(paramsCoche);
	coche->addComponent<RigidBody>(DYNAMIC, 100);

	//coche->addChild(camera);
	Spyutils::Vector3 posCoche = cocheTr->getPosition();
	/*cam_tr->setPosition(posCoche.x, posCoche.y + 3, posCoche.z + 7.5);
	cam_tr->pitch(20);*/

	//Spyutils::VirtualTimer* timer = new Spyutils::VirtualTimer();
	uint32_t deltaTime = 0;

	bool rot = true;
	mm->initComponents();


	while(!mm->quit() && !InputManager::getInstance()->closeWindowEvent()) {
		cam_cam = RenderManager::getInstance()->getCamera();
		/*camera = cam_cam->getEntity();
		cam_tr = camera->getComponent<Transform>();*/

		//timer->reset();

		if(inputManager->isKeyDown(InputManager::ESCAPE) ||
		   inputManager->closeWindowEvent()) {
			mm->shutDown();
		} else {
			
			if(inputManager->isKeyUp('s')) {
				rot = true;
				//auto quate = cam_tr->getRotationQ();
				/*quate.rotateGlobal(180, {0, 1, 0});
				cam_tr->setRotationQ(quate.w, quate.x, quate.y, quate.z);*/
			}
			
			if(inputManager->isKeyDown('c')) {
				RenderManager::getInstance()->resizeWindow(1920, 1080);
			}
			if(inputManager->isKeyDown('v')) {
				auto trsi = sinbad->getComponent<Transform>();
				trsi->setScale(20);
			}
		}

		mm->update(deltaTime);
		mm->render();

		//deltaTime = timer->currTime();
		int waitTime = FRAMETIME - deltaTime;

		if(waitTime > 0)
			Sleep(waitTime);
	}

	mm->clean();
	GetComponentWrapper::closeAllManagers();

	//delete timer;

	return 0;
}

