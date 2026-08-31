#pragma once

#include <string>
#include <string_view>
#include "../Engine/ScreenEntity.hpp"
#include "../Engine/GameState.h"

class MainMenuScreen
{
public:
	// Render the menu screen
	ScreenEntity RenderMainMenu();

	// handle selected choice
	GameState HandleChoice(ScreenEntity mainMenu);


private:
	std::string_view DrawArtwork() const;
};