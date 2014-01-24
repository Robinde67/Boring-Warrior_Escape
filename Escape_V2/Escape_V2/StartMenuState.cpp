// StartMenuState.cpp

#include "StartMenuState.h"
#include <SFML/Graphics.hpp>
#include <iostream>

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

bool StartMenuState::Update() {
    UpdateEvents();

	
	return true;
}

void StartMenuState::Draw() {
	
	ms_window->clear();
	ms_window->display();
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

void StartMenuState::UpdateEvents() {
	sf::Event event;
	while (ms_window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			ms_window->close();
		}
	}


	sf::Mouse::getPosition();
}
