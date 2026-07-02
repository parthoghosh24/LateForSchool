#include "MainMenuScreen.h"
#include "../Engine/ScreenEntity.hpp"


GameState MainMenuScreen::RenderMainMenu()
{
	ScreenEntity menuScreen(
		"LATE FOR SCHOOL",
		DrawArtwork(),
		{ "[1] Start new game", "[2] Exit game" }
	);

	menuScreen.Render();
	std::string choice = menuScreen.GetValidInput({ "1", "2" });

	// change game state accordingly
	if (choice == "1")
	{
		return GameState::IN_GAME;
	}
	else if (choice == "2")
	{
		return GameState::EXIT;
	}

	return GameState::MAIN_MENU;
}

std::string MainMenuScreen::DrawArtwork() const
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
