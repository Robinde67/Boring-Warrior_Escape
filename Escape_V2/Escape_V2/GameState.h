// GameState.h

#pragma once

#include "state.h"

class GameState :
	public State
{
public:
	GameState();
	~GameState();

	void Enter();
	void Exit();
	bool Update(float deltatime);
	void Draw();
	std::string Next();
	bool IsType(const std::string &c_type);
	void Reset();

private:
	std::string m_nextState;
};
