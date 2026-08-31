#pragma once
#include "ScreenEntity.hpp"
#include "../MainMenu/MainMenuScreen.h"
#include "../Engine/GameState.h"
#include "../Narrative/Director/Director.h"
#include <stack>


class Engine
{
public:

	// all the things to be done at initialization would be handled here
	void Initialize();

	// all the things to be done when the game runs handled here.
	void Run();	

private:

	// This will the entire game state
	std::stack<GameState> m_gameState;

	// Main menu object
	MainMenuScreen m_mainMenuScreen;

	// In game director
	Director m_inGameDirector;

	

	// functions

	void UpdateState();	

	void HandleMainMenu();

	void HandlePauseMenu();

	void HandleInGame();

	void HandleExit();

	void ClearScreen();
};
