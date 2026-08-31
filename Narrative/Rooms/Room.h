#pragma once

#include "../../Engine/ScreenEntity.hpp"
#include "../../Engine/GameState.h"
#include <iostream>
#include <string>

/*
* This class is responsible for 
* holding the data structure for the room
*/

class Room
{
public:
	//Render the room
	ScreenEntity RenderRoom(int index);

	// handle selected choice
	void HandleChoice(ScreenEntity room, int index);

private:

	void HandleRoom1(std::string choice);
};