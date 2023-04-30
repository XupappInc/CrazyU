#include "GameManager.h"

#include "EntityComponent/Entity.h"
#include <iostream>

CrazyU::GameManager::GameManager() : paradaActual_(nullptr), paradas_(std::vector<Separity::Entity*>()), score_(0) {}

CrazyU::GameManager::~GameManager() {}

void CrazyU::GameManager::update(const uint32_t& deltaTime) { return; }

void CrazyU::GameManager::addScore(int score) { score_ += score; }

int CrazyU::GameManager::getScore() { return score_; }

void CrazyU::GameManager::addParada(Separity::Entity* parada) {
	paradas_.push_back(parada);
}

void CrazyU::GameManager::setParadaActual(Separity::Entity* paradaActual) {
	paradaActual_ = paradaActual;
}
