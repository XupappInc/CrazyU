#include "GameManager.h"

#include "EntityComponent/Entity.h"
#include <EntityComponent/EntityManager.h>
#include <LuaEngine/Behaviour.h>
#include <iostream>

CrazyU::GameManager::GameManager()
    : paradaActual_(nullptr), paradas_(std::vector<Separity::Entity*>()),
      score_(0), paradasInitialized_(false), timeBetweenStops_(30000),
      isPlaying_(true), currTime_(0) {}

CrazyU::GameManager::~GameManager() {

}

void CrazyU::GameManager::start() {

	addParadas("SM_Prop_BusStop_01");
}

void CrazyU::GameManager::update(const uint32_t& deltaTime) {
	currTime_ += deltaTime;
	if(timeLeft() <= 0) {
		isPlaying_ = false;
	}
	return;
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

float CrazyU::GameManager::timeLeft() {
	float timeLeft = timeBetweenStops_ - currTime_;
	float timeSecs = timeLeft / 1000;
	std::cout << timeSecs << "\n";
	return timeSecs;
}
