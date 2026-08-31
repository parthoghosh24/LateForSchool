#include "PauseMenuScreen.h"
#include "../Constants/Constants.h"

GameState PauseMenuScreen::RenderPauseMenu()
{
	//ScreenEntity menuScreen(
	//	Constants::PAUSE_MENU_TITLE,
	//	"",
	//	{ Constants::PAUSE_MENU_OPTION_1, Constants::PAUSE_MENU_OPTION_2 }
	//);

	//// Render the menu screen
	//menuScreen.Render();

	return GameState::PAUSE_MENU;
}
