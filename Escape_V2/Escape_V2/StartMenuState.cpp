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

<<<<<<< HEAD
bool StartMenuState::Update() {
<<<<<<< HEAD
	return false;
=======
bool StartMenuState::Update(float deltatime) {
    
>>>>>>> Robin
}

void StartMenuState::Draw() {
    
=======
	UpdateEvents();

	
	return true;
}

void StartMenuState::Draw() {
	
	ms_window->clear();
	ms_window->display();
>>>>>>> 294cddd251dae30309c89b89dc27b02562fbead2
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


	sf::Mouse::getPosition()
}
