#include "GameManager.h"

#include "EntityComponent/Entity.h"
#include <EntityComponent/EntityManager.h>
#include <LuaEngine/Behaviour.h>
#include <iostream>

CrazyU::GameManager::GameManager() : paradaActual_(nullptr), paradas_(std::vector<Separity::Entity*>()), score_(0), paradasInitialized_(false) {}

CrazyU::GameManager::~GameManager() {}

void CrazyU::GameManager::start() { addParadas("SM_Prop_BusStop_01"); }

void CrazyU::GameManager::update(const uint32_t& deltaTime) { return; }

void CrazyU::GameManager::addScore(int score) { score_ += score; }

int CrazyU::GameManager::getScore() { return score_; }

void CrazyU::GameManager::addParadas(std::string tagParada) {
	if(!paradasInitialized_) 
	{
		paradas_ = Separity::EntityManager::getInstance()->getEntitiesByTag(tagParada);

		for(auto it = paradas_.begin(); it != paradas_.end();) 
		{ 
			if((*it)->getComponent<Separity::Behaviour>() == nullptr) {
				it = paradas_.erase(it);
			} else
				it++;
		}

		paradasInitialized_ = true;
	}
}
