#include "Kitchen.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// balcony.
void Kitchen::RenderKitchen(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the Kitchen
ScreenEntity Kitchen::Render()
{
	ScreenEntity room(
		Constants::ROOM4_TITLE,
		Constants::ROOM4_DESCRIPTION,
		{
			Constants::ROOM4_OPTION_1,
			Constants::ROOM4_OPTION_2,
			Constants::ROOM4_OPTION_3,
			Constants::ROOM4_OPTION_4,
			Constants::ROOM4_OPTION_5,
			Constants::ROOM4_OPTION_6,
			Constants::ROOM4_OPTION_7,
			Constants::ROOM4_OPTION_8,			
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void Kitchen::HandleChoice(ScreenEntity room, Director& director)
{
	std::string choice = room.GetValidInput(
		{
			Constants::OPTION_ONE,
			Constants::OPTION_TWO,
			Constants::OPTION_THREE,
			Constants::OPTION_FOUR,
			Constants::OPTION_FIVE,
			Constants::OPTION_SIX,
			Constants::OPTION_SEVEN,
			Constants::OPTION_EIGHT,			
		}
		);

	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM4_OPTION_1_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM4_OPTION_2_RESPONSE << "\n\n\n\n";

		// Update the screwdriver inventory to be true
		director.UpdateInventory("screwdriver", 1);
	}
	else if (choice == Constants::OPTION_THREE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM4_OPTION_3_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_FOUR)
	{
		// Play 4th text scene
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentGameplayState" , 0}, {"currentTextScene", 4} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
		director.UpdateInventory("checkedFridge", 1);
	}
	else if (choice == Constants::OPTION_FIVE)
	{
		// Go to drawing room
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , DrawingRoom::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
	else if (choice == Constants::OPTION_SIX)
	{
		// Go to drawing room
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , Washroom::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
	else if (choice == Constants::OPTION_SEVEN)
	{
		// Go to drawing room
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , SecondBedRoom::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
	else if (choice == Constants::OPTION_EIGHT)
	{
		// Go to drawing room
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , ExitDoor::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
	
}
