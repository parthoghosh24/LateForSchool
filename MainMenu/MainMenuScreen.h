#pragma once

#include "../Engine/Engine.h"
#include <string>

class MainMenuScreen
{
public:
	GameState RenderMainMenu();

private:
	std::string DrawArtwork() const;
};