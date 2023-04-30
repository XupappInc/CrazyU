#include "GameManager.h"

#include <iostream>

CrazyU::GameManager::GameManager() {}

CrazyU::GameManager::~GameManager() {}

void CrazyU::GameManager::update(const uint32_t& deltaTime) {
	
}

void CrazyU::GameManager::addScore(int score) { score_ += score; }

int CrazyU::GameManager::getScore() { return score_; }
