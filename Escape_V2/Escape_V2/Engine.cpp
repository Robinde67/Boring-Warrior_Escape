//
//  Engine.cpp
//  Escape_V2
//
//  Created by Robin on 23/01/14.
//  Copyright (c) 2014 Robin AB. All rights reserved.
//

#include "Engine.h"
#include "Statemanager.h"
#include "StartMenuState.h"
#include "GameState.h"
#include "CreditState.h"
#include "OptionsState.h"


Engine::Engine()
{
    mp_stateManager = nullptr;
}

Engine::~Engine()
{
    //flyttad från Cleanup()
    if(mp_stateManager != nullptr)
    {
        delete mp_stateManager;
        mp_stateManager = nullptr;
    }
}

bool Engine::Initialize()
{
    //skapa en ny state manager om det inte finns någon
    if(mp_stateManager==nullptr)
    {
        mp_stateManager= new StateManager();
        if(mp_stateManager==nullptr)
        {
            return false;
        }
        mp_stateManager->Attach(new StartMenuState());
		mp_stateManager->Attach(new GameState());
		mp_stateManager->Attach(new OptionsState());
		mp_stateManager->Attach(new CreditState());
        mp_stateManager->SetState("GameState");
        //lägg till fler states med tiden, LoadingState kommer vara den första som körs senare
    }
    return true;
}

void Engine::Run()
{
    //game loopen, alternativt lägg till Draw() i engine
    while(mp_stateManager->IsRunning())
    {
        mp_stateManager->Update();
    }
}