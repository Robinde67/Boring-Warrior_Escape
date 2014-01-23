//
//  Engine.h
//  Escape_V2
//
//  Created by Robin on 23/01/14.
//  Copyright (c) 2014 Robin AB. All rights reserved.
//

class StateManager;

class Engine
{
public:
    Engine();
    ~Engine();
    
    bool Initialize();
    void Run();
    //Cleanup flyttad till destructorn
    
private:
    StateManager *mp_stateManager;
};