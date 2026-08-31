#include "../Constants/Constants.h"
#include "MainMenuScreen.h"
#include "../Engine/ScreenEntity.hpp"


ScreenEntity MainMenuScreen::RenderMainMenu()
{
	ScreenEntity mainMenu(
		Constants::MAIN_MENU_TITLE,
		DrawArtwork(),
		{ Constants::MAIN_MENU_OPTION_1, Constants::MAIN_MENU_OPTION_2 }
	);

	mainMenu.Render();
	
	return mainMenu;
}

GameState MainMenuScreen::HandleChoice(ScreenEntity mainMenu)
{
	std::string choice = mainMenu.GetValidInput({ Constants::OPTION_ONE, Constants::OPTION_TWO });

	// change game state accordingly
	if (choice == Constants::OPTION_ONE)
	{
		return GameState::IN_GAME;
	}
	else if (choice == Constants::OPTION_TWO)
	{
		return GameState::EXIT;
	}

	// This will never happen
	return GameState::MAIN_MENU;
}

std::string_view MainMenuScreen::DrawArtwork() const
{
    return R"(

      _ . - - - . _
   /   _  12  _     \
  /   (_)  |   (_)   \
 |  9      |       3  |
 |         O . _      |
  \   (_)     (_)    /
   \ _   _  6  _   _ /
         " - - - "

)";
}
