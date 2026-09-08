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
		// player did not bath
		if (!director.CheckInventoryStatus("bathed"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_3_RESPONSE_1 << "\n\n\n\n";
		}

		// player has bathed but did not wear clothes
		else if (director.CheckInventoryStatus("bathed") && !director.CheckInventoryStatus("wornClothes"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_3_RESPONSE_2 << "\n\n\n\n";			
		}

		// player has bathed and worn clothes
		else if (director.CheckInventoryStatus("bathed") && director.CheckInventoryStatus("wornClothes"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_3_RESPONSE_3 << "\n\n\n\n";
			director.UpdateInventory("schoolBag", 1);
		}

		//player has picked up bag
		else if (director.CheckInventoryStatus("schoolBag"))
		{
			std::cout << "\n\n\n\n" << Constants::ROOM2_OPTION_3_RESPONSE_4 << "\n\n\n\n";
		}
		
	}
	else if (choice == Constants::OPTION_FOUR)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , Kitchen::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
	else if (choice == Constants::OPTION_FIVE)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , Balcony::ID} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
	else if (choice == Constants::OPTION_SIX)
	{
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentRoom" , MasterBedRoom::ID}};
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
}
