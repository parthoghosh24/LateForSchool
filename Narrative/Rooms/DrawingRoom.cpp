#include "DrawingRoom.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// drawing room.
void DrawingRoom::RenderDrawingRoom(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the master bed room
ScreenEntity DrawingRoom::Render()
{
	ScreenEntity room(
		Constants::ROOM2_TITLE,
		Constants::ROOM2_DESCRIPTION,
		{
			Constants::ROOM2_OPTION_1,
			Constants::ROOM2_OPTION_2,
			Constants::ROOM2_OPTION_3,
			Constants::ROOM2_OPTION_4,
			Constants::ROOM2_OPTION_5,
			Constants::ROOM2_OPTION_6,
			Constants::ROOM1_OPTION_P,
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void DrawingRoom::HandleChoice(ScreenEntity room, Director& director)
{
	std::string choice = room.GetValidInput(
		{
			Constants::OPTION_ONE,
			Constants::OPTION_TWO,
			Constants::OPTION_THREE,
			Constants::OPTION_FOUR,
			Constants::OPTION_FIVE,
			Constants::OPTION_SIX,
			Constants::OPTION_P,
		}
		);

	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_1_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_2_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_THREE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_3_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_FOUR)
	{
		//TODO: Go to kitchen
	}
	else if (choice == Constants::OPTION_FIVE)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , 3} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
	else if (choice == Constants::OPTION_SIX)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , 1} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
}
