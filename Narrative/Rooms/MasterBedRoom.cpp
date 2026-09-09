#include "MasterBedRoom.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// master bedroom. We could follow the same pattern for all other rooms.
void MasterBedRoom::RenderMasterBedRoom(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the master bed room
ScreenEntity MasterBedRoom::Render()
{
	ScreenEntity room(
		Constants::ROOM1_TITLE,
		Constants::ROOM1_DESCRIPTION,
		{
			Constants::ROOM1_OPTION_1,
			Constants::ROOM1_OPTION_2,
			Constants::ROOM1_OPTION_3,
			Constants::ROOM1_OPTION_4,
			Constants::ROOM1_OPTION_5,			
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void MasterBedRoom::HandleChoice(ScreenEntity room, Director& director)
{	
	std::string choice = room.GetValidInput(
		{
			Constants::OPTION_ONE,
			Constants::OPTION_TWO,
			Constants::OPTION_THREE,
			Constants::OPTION_FOUR,
			Constants::OPTION_FIVE,			
		}
	);

	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM1_OPTION_1_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{
		std::cout << "\n\n\n\n" << Constants::ROOM1_OPTION_2_RESPONSE << "\n\n\n\n";
	}
	else if (choice == Constants::OPTION_THREE)
	{
		// if screwdriver, play text scene
		if (director.CheckInventoryStatus("screwdriver"))
		{
			// Play 2nd text scene
			std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentGameplayState" , 0}, {"currentTextScene", 2} };
			director.UpdateInGameState(gameStateFieldsToUpdate);
			director.UpdateInventory("checkedPhoto", 1);
		}
		else
		{
			std::cout << "\n\n\n\n" << Constants::ROOM1_OPTION_3_RESPONSE << "\n\n\n\n";
		}
		
	}
	else if (choice == Constants::OPTION_FOUR)
	{
		if (!director.CheckInventoryStatus("bathed"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM1_OPTION_4_RESPONSE_1 << "\n\n\n\n";
		}
		else
		{
			std::cout << "\n\n\n\n" << Constants::ROOM1_OPTION_4_RESPONSE_2 << "\n\n\n\n";
			director.UpdateInventory("wornClothes", 1);
		}
		
	}
	else if (choice == Constants::OPTION_FIVE)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , DrawingRoom::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
}
