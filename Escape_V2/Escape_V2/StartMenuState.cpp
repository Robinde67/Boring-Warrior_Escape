// StartMenuState.cpp

#include "StartMenuState.h"

StartMenuState::StartMenuState() {
	m_nextState = "";
}

StartMenuState::~StartMenuState() {

}

void StartMenuState::Enter() {
	m_nextState = "";
}

void StartMenuState::Exit() {

}

<<<<<<< HEAD
bool StartMenuState::Update() {
	return false;
=======
bool StartMenuState::Update(float deltatime) {
    
>>>>>>> Robin
}

void StartMenuState::Draw() {
    
}

std::string StartMenuState::Next() {
	return m_nextState;
}

bool StartMenuState::IsType(const std::string &c_type) {
	return c_type.compare("StartMenuState") == 0;
}

void StartMenuState::Reset() {
	m_nextState = "";
}