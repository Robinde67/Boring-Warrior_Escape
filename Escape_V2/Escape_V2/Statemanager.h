// StateManager.h

#pragma once

#include <vector>

class State;

class StateManager
{
public:
	StateManager();
	~StateManager();

	void Attach(State *state);
	void Update();
	void Draw();
	void SetState(const std::string &c_type);
	void ChangeState();
	bool IsRunning();
	void Init();
	void CleanUp();



private:
	std::vector<State*> m_states;
	State *mp_current;
    
    float m_deltatime;

	bool m_quit;

};