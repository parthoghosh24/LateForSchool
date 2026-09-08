#include "ExitDoor.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// exit door.
void ExitDoor::RenderExitDoor(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the master bed room
ScreenEntity ExitDoor::Render()
{
	ScreenEntity room(
		Constants::ROOM7_TITLE,
		Constants::ROOM7_DESCRIPTION,
		{
			Constants::ROOM7_OPTION_1,
			Constants::ROOM7_OPTION_2,
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void ExitDoor::HandleChoice(ScreenEntity room, Director& director)
{
	std::string choice = room.GetValidInput(
		{
			Constants::OPTION_ONE,
			Constants::OPTION_TWO,
		}
		);

	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM7_OPTION_1_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{

		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , Kitchen::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
}
