// StateManager.cpp

#include "StateManager.h"
#include "State.h"

StateManager::StateManager() {
	mp_current = nullptr;
}


StateManager::~StateManager() {
	auto it = m_states.begin();
	while(it != m_states.end()) {
		delete(*it);
		++it;
	}
}

void StateManager::Attach(State *p_state) {
	m_states.push_back(p_state);
}

void StateManager::Update() {
	if(mp_current == nullptr) {
		return;
	}
	
	if(!mp_current->Update()) {
			ChangeState();
	}

}

void StateManager::Draw() {
	if(mp_current == nullptr) {
		return;
	}

	mp_current->Draw();
}

void StateManager::ChangeState() {
	std::string next = mp_current->Next();

	if(mp_current != nullptr) {
		mp_current->Exit();
		mp_current = nullptr;
	}

	for(unsigned int i = 0; i < m_states.size(); i++) {
		if(m_states[i]->IsType(next)) {
			mp_current = m_states[i];
			mp_current->Enter();
			return;
		}
	}
}

bool StateManager::IsRunning() {
	return mp_current != nullptr;
}

void StateManager::SetState(const std::string &c_type) {
	for(unsigned int i = 0; i < m_states.size(); i++) {
		if(m_states[i]->IsType(c_type)) {
			mp_current = m_states[i];
			mp_current->Enter();
			return;
		}
	}
}

