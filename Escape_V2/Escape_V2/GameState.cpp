// StartMenuState.cpp

#include "GameState.h"

GameState::GameState() {
	m_nextState = "";
}

GameState::~GameState() {

}

void GameState::Enter() {
	m_nextState = "";
}

void GameState::Exit() {

}

bool GameState::Update() {


	return false;
}

void GameState::Draw() {

}

std::string GameState::Next() {
	return m_nextState;
}

bool GameState::IsType(const std::string &c_type) {
	return c_type.compare("GameState") == 0;
}

void GameState::Reset() {
	m_nextState = "";
}