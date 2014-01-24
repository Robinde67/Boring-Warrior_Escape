//LoadingState.h

#include "LoadingState.h"
#include <SFML/Graphics.hpp>
#include "State.h"

LoadingState::LoadingState() {
	ms_window = nullptr;
}


LoadingState::~LoadingState() {

}

void LoadingState::Enter() {
	if(ms_window == nullptr) {
		ms_window = new sf::RenderWindow(sf::VideoMode(1500, 700), "SFML shapes", sf::Style::Default);
	}
}

void LoadingState::Exit() {

}

bool LoadingState::Update() {
	m_nextState = "StartMenuState";
	return false;
}

void LoadingState::Draw() {
//	ms_window->display();
}

std::string LoadingState::Next() {
	return m_nextState;
}

bool LoadingState::IsType(const std::string &c_type) {
	return c_type.compare("LoadingState") == 0;
}

void LoadingState::Reset() {
	m_nextState = "";
}