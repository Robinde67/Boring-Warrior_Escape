// StateMenuState.h

#pragma once

#include "state.h"

class StartMenuState :
	public State
{
public:
	StartMenuState();
	~StartMenuState();

	void Enter();
	void Exit();
	bool Update();
	void Draw();
	std::string Next();
	bool IsType(const std::string &c_type);
	void Reset();

	void UpdateEvents();

private:
	std::string m_nextState;
};

