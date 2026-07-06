#pragma once
#include "../Rooms/Room.h"

class Director
{
public:
	// constructor
	Director();

	// destructor
	~Director();

	void IntializeGameplay();
	
private:

	Room m_playerCurrentLocation = Room("Master Bedroom", "Big master bedroom with a king size mattress lying on the floor almost covering the home. There is a gate connecting to outside balcony. There is a dresser in with all the drawers unlocked. A big closet containing clothes. There is an exit door connecting to main drawing room. ");
	
};