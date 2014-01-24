//
//  State.cpp
//  Escape_V2
//
//  Created by Robin on 23/01/14.
//  Copyright (c) 2014 Robin AB. All rights reserved.
//

#include "State.h"
#include <SFML/Graphics.hpp>

//skapa ett nytt fönster att använda tills LoadingState är klar
//sf::Window *State::ms_window = new sf::Window;

sf::RenderWindow *State::ms_window = nullptr;