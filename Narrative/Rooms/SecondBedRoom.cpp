#include "SecondBedRoom.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// second bed room.
void SecondBedRoom::RenderSecondBedRoom(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the second bed room
ScreenEntity SecondBedRoom::Render()
{
	ScreenEntity room(
		Constants::ROOM6_TITLE,
		Constants::ROOM6_DESCRIPTION,
		{
			Constants::ROOM6_OPTION_1,
			Constants::ROOM6_OPTION_2,
			Constants::ROOM6_OPTION_3,
			Constants::ROOM6_OPTION_4,			
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void SecondBedRoom::HandleChoice(ScreenEntity room, Director& director)
{
	std::string choice = room.GetValidInput(
		{
			Constants::OPTION_ONE,
			Constants::OPTION_TWO,
			Constants::OPTION_THREE,
			Constants::OPTION_FOUR,			
		}
		);

	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM6_OPTION_1_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM6_OPTION_2_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_THREE)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , GhostCabinet::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
	else if (choice == Constants::OPTION_FOUR)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , Kitchen::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
}
