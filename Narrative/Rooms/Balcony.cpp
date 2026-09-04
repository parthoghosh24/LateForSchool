#include "Balcony.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// balcony.
void Balcony::RenderBalcony(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the master bed room
ScreenEntity Balcony::Render()
{
	ScreenEntity room(
		Constants::ROOM3_TITLE,
		Constants::ROOM3_DESCRIPTION,
		{
			Constants::ROOM3_OPTION_1,
			Constants::ROOM3_OPTION_2,			
			Constants::ROOM1_OPTION_P,
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void Balcony::HandleChoice(ScreenEntity room, Director& director)
{
	std::string choice = room.GetValidInput(
		{
			Constants::OPTION_ONE,
			Constants::OPTION_TWO,			
			Constants::OPTION_P,
		}
		);

	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM3_OPTION_1_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{
		
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , 2} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
}
