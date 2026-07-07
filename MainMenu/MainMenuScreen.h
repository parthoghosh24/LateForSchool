#pragma once

#include "../Engine/Engine.h"
#include <string>
#include <string_view>

class MainMenuScreen
{
public:
	GameState RenderMainMenu();

private:
	std::string_view DrawArtwork() const;
};