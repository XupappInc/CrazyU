#include "VehicleMovement.h"

#include "EntityComponent\Entity.h"
#include "EntityComponent\Transform.h"
#include "InputEngine/InputManager.h"
#include "PhysicsEngine\Rigidbody.h"
#include "RenderEngine/Camera.h"
#include "RenderEngine/RenderManager.h"
#include "SeparityUtils\Vector.h"
#include "SeparityUtils\spyMath.h"

using namespace Separity;

CrazyU::VehicleMovement::VehicleMovement()
    : cameraTr_(nullptr), rb_(nullptr), inputManager(nullptr) {}

CrazyU::VehicleMovement::~VehicleMovement() {}

void CrazyU::VehicleMovement::initComponent() {
	inputManager = Separity::InputManager::getInstance();
	rb_ = ent_->getComponent<RigidBody>();
	assert(rb_ != nullptr);

	auto camera = Separity::RenderManager::getInstance()->getCamera();
	assert(camera != nullptr);

	auto cameraEnt = camera->getEntity();

	cameraTr_ = cameraEnt->getComponent<Transform>();
	cameraTr_->setPosition(Spyutils::Vector3(0, 0, 0));
	cameraTr_->setRotation(0, 0, 0);
	
	auto transform = ent_->getComponent<Transform>();
	auto pos = transform->getPosition();
	
	cameraTr_->setRotationQ(0, 0, 0, 1);
	
	auto quaternion = cameraTr_->getRotationQ();
	quaternion.rotateGlobal(-90, Spyutils::Vector3(0,1,0));
	cameraTr_->setRotationQ(quaternion.w, quaternion.x, quaternion.y, quaternion.z);
	ent_->addChild(cameraEnt);
	cameraTr_->setPosition(Spyutils::Vector3(pos.x + 16, pos.y + 7, pos.z));
	cameraTr_->pitch(-55);
	assert(cameraTr_ != nullptr);
}

void CrazyU::VehicleMovement::girar(int dir, float dt) {
	rb_->applyTorque(Spyutils::Vector3(
	    0, dir * -1 * rb_->getLinearVelocity().magnitude() * 2, 0));

	// Calcular la direcci�n de la fuerza en funci�n de la rotaci�n del
	// objeto
	float angle =
	    -ent_->getComponent<Transform>()->getRotationQ().getRotation().y;

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

	if(cameraOffset_ > 0) {
		cameraOffset_ -= 0.02;
		cameraTr_->translate(Spyutils::Vector3(-0.01, 0, -0.02));
	}
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

void CrazyU::VehicleMovement::acelerar(int dir, float dt) {
	// Calcular la direcci�n de la fuerza en funci�n de la rotaci�n del objeto
	float angle =
	    -ent_->getComponent<Transform>()->getRotationQ().getRotation().y;

	float angleRad = Spyutils::Math::toRadians(angle);

	float forceMagnitude = dir;
	if(dir > 0)
		forceMagnitude = dir * 3000;
	else
		forceMagnitude = dir * 1000;
	float forceX = forceMagnitude * sin(angleRad);  // componente x de la fuerza
	float forceZ = forceMagnitude * cos(angleRad);  // componente y de la fuerza

	// Normalizar el vector de direcci�n de la fuerza
	float magnitude = -sqrt(forceX * forceX + forceZ * forceZ);
	if(dir < 0)
		magnitude *= -1;
	forceX /= magnitude;
	forceZ /= magnitude;

	// Multiplicar el vector de direcci�n de la fuerza por la magnitud de la
	// fuerza
	forceX *= forceMagnitude;
	forceZ *= forceMagnitude;

	Spyutils::Vector3 impulso(dt*-forceX, 0, dt*forceZ);

	rb_->applyImpulse(impulso);
	if(dir > 0 && cameraOffset_ < 3) {
		cameraOffset_ += 0.02;
		cameraTr_->translate(Spyutils::Vector3(0.01, 0, 0.02));
	}
}

void CrazyU::VehicleMovement::frenar(float dt) {
	rb_->setLinearVelocity(rb_->getLinearVelocity() * 0.95);
	if(cameraOffset_ > 0) {
		cameraOffset_ -= 0.1;
		cameraTr_->translate(Spyutils::Vector3(-0.05, 0, -0.1));
	}
}

void CrazyU::VehicleMovement::update(const uint32_t& deltaTime) {
	float dt = deltaTime / 1000.0f;
	if(inputManager->isKeyHeld('w')) {
		acelerar(1,dt);
	}
	if(inputManager->isKeyHeld('a')) {
		girar(-1,dt);
	}
	if(inputManager->isKeyHeld('d')) {
		girar(1,dt);
	}
	
	if(inputManager->isKeyHeld(Separity::InputManager::SPACE)) {
		frenar(dt);
	}
	if(inputManager->isKeyHeld('s')) {
		acelerar(-1,dt);
		auto quate = cameraTr_->getRotationQ();
		if(rot_) {
			quate.rotateGlobal(180, {0, 1, 0});
			cameraTr_->setRotationQ(quate.w, quate.x, quate.y, quate.z);
			rot_ = false;
		}
	}
	if(inputManager->isKeyUp('s')) {
		rot_ = true;
		auto quate = cameraTr_->getRotationQ();
		quate.rotateGlobal(180, {0, 1, 0});
		cameraTr_->setRotationQ(quate.w, quate.x, quate.y, quate.z);
	}

	rb_->setLinearVelocity(rb_->getLinearVelocity() * 0.999);
	rb_->setAngularVelocity(rb_->getAngularVelocity() * 0.99);
	if(cameraOffset_ > 0) {
		cameraOffset_ -= 0.005;
		cameraTr_->translate(Spyutils::Vector3(-0.0025, 0, -0.005));
	}
	if(cameraRot_ > 1) {
		cameraRot_ -= 0.05;
		cameraTr_->yaw(-0.05);
		cameraTr_->roll(-0.05 / 2);
	} else if(cameraRot_ < -1) {
		cameraRot_ += 0.05;
		cameraTr_->yaw(0.05);
		cameraTr_->roll(0.05 / 2);
	}
}