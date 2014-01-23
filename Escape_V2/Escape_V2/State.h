// State.h

#pragma once

class State {
	virtual ~State();

	virtual void Enter() = 0;
	virtual void Exit() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Next() = 0;
	virtual void IsType() = 0;
	virtual void Reset() = 0;

	static void ms_window();
};
