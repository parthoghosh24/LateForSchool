#include "GhostCabinet.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"
#include <optional>

// This is the main method which renders and shows control for
// balcony.
void GhostCabinet::RenderGhostCabinet(Director& director)
{
	ScreenEntity roomScreen = Render(director);
	HandleChoice(roomScreen, director);
}

// Renders the master bed room
ScreenEntity GhostCabinet::Render(Director& director)
{
	std::optional<ScreenEntity> room;

	// if any inventory is pending, don't give option for good ending
	if (director.CheckInventoryPending())
	{
		room = ScreenEntity{
			Constants::GHOST_TITLE,
			Constants::GHOST_DESCRIPTION,
			{
				Constants::GHOST_OPTION_1,
			}
		};

		room->Render();
	}

	// Show the second option if atleast ready so that player can get neutral ending
	else if(director.CheckIfGotReady())
	{
		room = ScreenEntity{
			Constants::GHOST_TITLE,
			Constants::GHOST_DESCRIPTION,
			{
				Constants::GHOST_OPTION_1,
				Constants::GHOST_OPTION_2,				
			}
		};

		room->Render();
	}
	else // Player gets option for good ending
	{
		room = ScreenEntity{
			Constants::GHOST_TITLE,
			Constants::GHOST_DESCRIPTION,
			{
				Constants::GHOST_OPTION_1,
				Constants::GHOST_OPTION_2,
				Constants::GHOST_OPTION_3,
			}
		};

		room->Render();
	}

	return std::move(*room);
}

// Responsible for handling the choices based on user input
void GhostCabinet::HandleChoice(ScreenEntity room, Director& director)
{
	std::string choice = ""; 
	
	
	if (director.CheckInventoryPending())
	{
		choice = room.GetValidInput(
			{
				Constants::OPTION_ONE,				
			}
			);
	}
	else if (director.CheckIfGotReady())
	{
		choice = room.GetValidInput(
			{
				Constants::OPTION_ONE,
				Constants::OPTION_TWO,
			}
			);
	}
	else
	{
		choice = room.GetValidInput(
			{
				Constants::OPTION_ONE,
				Constants::OPTION_TWO,
				Constants::OPTION_THREE,
			}
			);

	}
	


	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "over here";
		// Play 5th text scene
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentGameplayState" , 0}, {"currentTextScene", 5} };
		director.UpdateInGameState(gameStateFieldsToUpdate);
	}
	else if (choice == Constants::OPTION_TWO)
	{

		// Play 6th text scene
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentGameplayState" , 0}, {"currentTextScene", 6} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
	else if (choice == Constants::OPTION_TWO)
	{

		// Play 7th text scene
		std::unordered_map<std::string, int> gameStateFieldsToUpdate = { {"currentGameplayState" , 0}, {"currentTextScene", 7} };
		director.UpdateInGameState(gameStateFieldsToUpdate);

	}
}
