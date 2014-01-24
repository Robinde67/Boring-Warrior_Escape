// CreditState.h

#pragma once

#include "state.h"

class CreditState :
	public State
{
public:
	CreditState();
	~CreditState();

	void Enter();
	void Exit();
	bool Update();
	void Draw();
	std::string Next();
	bool IsType(const std::string &c_type);
	void Reset();

private:
	std::string m_nextState;
	
};

