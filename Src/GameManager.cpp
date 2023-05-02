#include "GameManager.h"

#include "EntityComponent/Entity.h"
#include "EntityComponent/Transform.h"
#include <EntityComponent/EntityManager.h>
#include <LuaEngine/Behaviour.h>
#include <iostream>
#include <PhysicsEngine/RigidBody.h>
#include <RenderEngine/MeshRenderer.h>

CrazyU::GameManager::GameManager()
    : paradaActual_(nullptr), paradaActualTr_(nullptr),
      paradas_(std::vector<Separity::Entity*>()),
      score_(0), paradasInitialized_(false), timeBetweenStops_(30000),
      isPlaying_(true), currTime_(0), player_(nullptr), playerTr_(nullptr), indexParada_(-1) {

	arrow_ = Separity::EntityManager::getInstance()->addEntity(Separity::_grp_GENERAL);
	arrowTr_ = arrow_->getComponent<Separity::Transform>();

	auto meshRenderer = arrow_->addComponent<Separity::MeshRenderer>();
	meshRenderer->setMesh("Bus1.mesh");
}

CrazyU::GameManager::~GameManager() {

}

void CrazyU::GameManager::start() {

	addParadas("SM_Prop_BusStop_01");
	nextParada();

	auto players = Separity::EntityManager::getInstance()->getEntitiesByTag("Player");

	if(players.size() < 1) 
	{
		std::cout << "[CRAZY U] GameManager: No hay player en la escena\n";
		return;
	}

	player_ = players[0];
	playerTr_ = player_->getComponent<Separity::Transform>();
}

void CrazyU::GameManager::update(const uint32_t& deltaTime) {
	currTime_ += deltaTime;
	if(timeLeft() <= 0) {
		isPlaying_ = false;
	}

	arrowTr_->setPosition(playerTr_->getPosition() + Spyutils::Vector3(0, 5, 0));

	if(paradaActualTr_ != nullptr)
		arrowTr_->lookAt(paradaActualTr_->getPosition());

	else
		std::cout << "[CRAZY U] GameManager: Parada actual no asignada\n";
}

void CrazyU::GameManager::addScore(int score) {
	score_ += score;
	timeBetweenStops_ += score * 1000;
}

int CrazyU::GameManager::getScore() { return score_; }

void CrazyU::GameManager::addParadas(std::string tagParada) {
	if(!paradasInitialized_) {
		paradas_ =
		    Separity::EntityManager::getInstance()->getEntitiesByTag(tagParada);

		for(auto it = paradas_.begin(); it != paradas_.end();) {
			if((*it)->getComponent<Separity::Behaviour>() == nullptr) {
				it = paradas_.erase(it);
			} else
				it++;
		}

		paradasInitialized_ = true;
	}
}

void CrazyU::GameManager::nextParada() {

	if(paradas_.size() <= 0) 
	{
		std::cout << "[CRAZY U] GameManager: No hay paradas en la escena\n";
		return;
	}

	if(indexParada_ < paradas_.size() - 1)
		indexParada_++;
	else
		indexParada_ = 0;

	paradaActual_ = paradas_[indexParada_];
	paradaActualTr_ = paradaActual_->getComponent<Separity::Transform>();
}

float CrazyU::GameManager::timeLeft() {
	float timeLeft = timeBetweenStops_ - currTime_;
	float timeSecs = timeLeft / 1000;
	std::cout << timeSecs << "\n";
	return timeSecs;
}
