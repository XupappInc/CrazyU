#include "VehicleMovement.h"

#include "EntityComponent/Entity.h"
#include "EntityComponent/Transform.h"
#include "InputEngine/InputManager.h"
#include "PhysicsEngine/Rigidbody.h"
#include "RenderEngine/Camera.h"
#include "RenderEngine/RenderManager.h"
#include "EntityComponent/EntityManager.h"
#include "SeparityUtils/SpyMath.h"
#include "SeparityUtils/Vector.h"


using namespace Separity;

CrazyU::VehicleMovement::VehicleMovement()
    : cameraTr_(nullptr), rb_(nullptr), inputManager(nullptr), node_(nullptr),
      entTr_(nullptr) {}

CrazyU::VehicleMovement::~VehicleMovement() {}

void CrazyU::VehicleMovement::girar(int dir) {
	rb_->applyTorque(Spyutils::Vector3(
	    0, dir * -1 * rb_->getLinearVelocity().magnitude() * 2, 0));

	// Calcular la dirección de la fuerza en función de la rotación del
	// objeto
	float angle = -entTr_->getRotationQ().getRotation().y;

	float angleRad = Spyutils::Math::toRadians(angle);

	float forceMagnitude = rb_->getLinearVelocity().magnitude() * 25;
	float forceX = forceMagnitude * sin(angleRad);  // componente x de la fuerza
	float forceZ = forceMagnitude * cos(angleRad);  // componente y de la fuerza

	// Normalizar el vector de direcci�n de la fuerza
	float magnitude = -sqrt(forceX * forceX + forceZ * forceZ);
	forceX /= magnitude;
	forceZ /= magnitude;

	// Multiplicar el vector de direcci�n de la fuerza por la magnitud de la
	// fuerza
	forceX *= forceMagnitude;
	forceZ *= forceMagnitude;

	Spyutils::Vector3 impulso( -forceX, 0,forceZ);

	rb_->setLinearVelocity(rb_->getLinearVelocity() * 0.97);
	rb_->addForce(impulso);

	
	if(rb_->getLinearVelocity().magnitude() > 0.1) {
		if(dir > 0 && cameraRot_ > -10) {
			cameraRot_ -= 0.15;
			cameraTr_->yaw(-0.15);
			cameraTr_->roll(-0.15 / 2);
		} else if(dir < 0 && cameraRot_ < 10) {
			cameraRot_ += 0.15;
			cameraTr_->yaw(0.15);
			cameraTr_->roll(0.15 / 2);
		}
	}
}

void CrazyU::VehicleMovement::acelerar(int dir) {
	// Calcular la dirección de la fuerza en función de la rotación del objeto
	float angle = -entTr_->getRotationQ().getRotation().y;

	float angleRad = Spyutils::Math::toRadians(angle);

	float forceMagnitude = dir > 0 ? 30 : -10;
	float forceX = forceMagnitude * sin(angleRad);  // componente x de la fuerza
	float forceZ = forceMagnitude * cos(angleRad);  // componente y de la fuerza

	// Normalizar el vector de dirección de la fuerza
	float magnitude = -sqrt(forceX * forceX + forceZ * forceZ) * dir;
	forceX /= magnitude;
	forceZ /= magnitude;

	// Multiplicar el vector de dirección de la fuerza por la magnitud de la
	// fuerza
	forceX *= forceMagnitude;
	forceZ *= forceMagnitude;

	Spyutils::Vector3 impulso(-forceX, 0,forceZ);

	rb_->applyImpulse(impulso);	
}

void CrazyU::VehicleMovement::frenar() {
	rb_->setLinearVelocity(rb_->getLinearVelocity() * 0.95);
}

void CrazyU::VehicleMovement::update(const uint32_t& deltaTime) {
	float dt = deltaTime / 1000.0f;
	
	if(inputManager->isKeyHeld('w') ||
	   inputManager->isControllerButtonHeld(InputManager::GAMEPADBUTTON::RT)) {
		acelerar(1);
	}
	if(inputManager->isKeyHeld('a')) {
		girar(-1);
	}
	if(inputManager->isKeyHeld('d')) {
		girar(1);
	}

	if(inputManager->leftJoystickEvent()) {
		auto ejes = inputManager->getLeftAxis();
		if(ejes.first > 0.0f)
			girar(1);
		else if(ejes.first < 0.0f)
			girar(-1);
	}
	
	if(inputManager->isKeyHeld(Separity::InputManager::SPACE) ||
	   inputManager->isControllerButtonHeld(InputManager::GAMEPADBUTTON::A)) {
		frenar();
	}
	if(inputManager->isKeyHeld('s') ||
	   inputManager->isControllerButtonHeld(InputManager::GAMEPADBUTTON::LT)) {
		acelerar(-1);
		auto quate = cameraTr_->getRotationQ();
		if(rot_) {
			quate.rotateGlobal(180, {0, 1, 0});
			cameraTr_->setRotationQ(quate.w, quate.x, quate.y, quate.z);
			rot_ = false;
		}
	} else if(inputManager->isKeyUp('s') ||
	          inputManager->isControllerButtonUp(
	              InputManager::GAMEPADBUTTON::LT)) {
		rot_ = true;
		auto quate = cameraTr_->getRotationQ();
		quate.rotateGlobal(180, {0, 1, 0});
		cameraTr_->setRotationQ(quate.w, quate.x, quate.y, quate.z);
	}

	rb_->setLinearVelocity(rb_->getLinearVelocity() * 0.999);
	rb_->setAngularVelocity(rb_->getAngularVelocity() * 0.99);

	if(cameraRot_ > 0) {
		cameraRot_ -= 0.05;
		cameraTr_->yaw(-0.05);
		cameraTr_->roll(-0.05 / 2);
	} else if(cameraRot_ < 0) {
		cameraRot_ += 0.05;
		cameraTr_->yaw(0.05);
		cameraTr_->roll(0.05 / 2);
	}
}

void CrazyU::VehicleMovement::start() {

	entTr_ = ent_->getComponent<Transform>();
	inputManager = Separity::InputManager::getInstance();
	rb_ = ent_->getComponent<RigidBody>();

	auto camera = Separity::RenderManager::getInstance()->getCamera();

	Separity::Entity* nodoFicticio = EntityManager::getInstance()->addEntity(_grp_GENERAL);
	node_ = nodoFicticio->getComponent<Transform>();
	node_->setPosition(Spyutils::Vector3(0, 0, 0));
	node_->setRotationQ(1, 0, 0, 0);
	
	Separity::Entity* cameraEnt = camera->getEntity();
	cameraTr_ = cameraEnt->getComponent<Transform>();
	cameraTr_->setPosition(Spyutils::Vector3(0, 0, 0));
	cameraTr_->setRotationQ(1, 0, 0, 0);

	Spyutils::Vector3 pos = entTr_->getPosition();

	Spyutils::spyQuaternion quaternion = cameraTr_->getRotationQ();
	quaternion.rotateGlobal(90, Spyutils::Vector3(0, 1, 0));
	cameraTr_->setRotationQ(quaternion.w, quaternion.x, quaternion.y,
	                        quaternion.z);
	
	ent_->addChild(nodoFicticio);
	nodoFicticio->addChild(cameraEnt);
	node_->setPosition(Spyutils::Vector3(pos.x + 16, pos.y + 7, pos.z));
	cameraTr_->pitch(-15);
}