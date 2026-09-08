#include "Washroom.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

// This is the main method which renders and shows control for
// balcony.
void Washroom::RenderWashroom(Director& director)
{
	ScreenEntity roomScreen = Render();
	HandleChoice(roomScreen, director);
}

// Renders the master bed room
ScreenEntity Washroom::Render()
{
	ScreenEntity room(
		Constants::ROOM5_TITLE,
		Constants::ROOM5_DESCRIPTION,
		{
			Constants::ROOM5_OPTION_1,
			Constants::ROOM5_OPTION_2,
			Constants::ROOM5_OPTION_3,
			Constants::ROOM5_OPTION_4,
			Constants::ROOM5_OPTION_5,
		}
		);

	room.Render();

	return room;
}

// Responsible for handling the choices based on user input
void Washroom::HandleChoice(ScreenEntity room, Director& director)
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
		// if not used sink
		if (!director.CheckInventoryStatus("usedSink"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_1_RESPONSE_1 << "\n\n\n\n";
			director.UpdateInventory("usedSink", 1);
		}
		else
		{
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_1_RESPONSE_2 << "\n\n\n\n";
		}
	}	
	else if (choice == Constants::OPTION_TWO)
	{

		// if not used toilet
		if (!director.CheckInventoryStatus("usedToilet"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_2_RESPONSE_1 << "\n\n\n\n";
			director.UpdateInventory("usedToilet", 1);
		}
		else
		{
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_2_RESPONSE_2 << "\n\n\n\n";
		}
	}
	else if (choice == Constants::OPTION_THREE)
	{
		// if not used toilet or sink
		if (!director.CheckInventoryStatus("usedSink") || !director.CheckInventoryStatus("usedToilet"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_3_RESPONSE_1 << "\n\n\n\n";			
		}
		// if not bathed
		else if (!director.CheckInventoryStatus("bathed"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_3_RESPONSE_2 << "\n\n\n\n";
			director.UpdateInventory("bathed", 1);
		}
		else if(director.CheckInventoryStatus("bathed"))
		{
			// bathed
			std::cout << "\n\n\n\n" << Constants::ROOM5_OPTION_3_RESPONSE_3 << "\n\n\n\n";
		}
	}
	else if (choice == Constants::OPTION_FOUR)
	{
		// Play 8th text scene
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentGameplayState" , 0}, {"currentTextScene", 8} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
		director.UpdateInventory("checkedFloss", 1);
	}
	else if (choice == Constants::OPTION_FIVE)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , Kitchen::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
}
