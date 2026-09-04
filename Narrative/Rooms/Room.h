#pragma once

#include "../../Engine/ScreenEntity.hpp"
#include "../../Engine/GameState.h"
#include "../Rooms/MasterBedRoom.h"
#include "../Rooms/DrawingRoom.h"
#include "../Rooms/Balcony.h"
#include <iostream>
#include <string>
#include <unordered_map>

/*
* This class is responsible for 
* holding the data structure for the room
*/

// Came across something called forward declaration via which I could
// instantiate Director without including the header file here. I do need
// to include the header file in .cpp though
class Director;
class Room
{
public:
	//Render the rooms
	void RenderRoom(int index, Director& director);
	

private:

	MasterBedRoom m_masterBedroom;
	DrawingRoom m_drawingRoom;
	Balcony m_balcony;
};