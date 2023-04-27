#include "GameManager.h"

CrazyU::GameManager::GameManager() {}

CrazyU::GameManager::~GameManager() {}

void CrazyU::GameManager::addScore(int score) { score_ += score; }

int CrazyU::GameManager::getScore() { return score_; }
