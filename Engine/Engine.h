#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include "ScreenEntity.hpp"

// This is the core game state
enum class GameState
{
	MAIN_MENU,
	PAUSE_MENU,
	IN_GAME,
	EXIT
};

class Engine
{
public:

	// all the things to be done at initialization would be handled here
	void Initialize();

	// all the things to be done when the game runs handled here.
	void Run();

private:
	// initialize current game state, this needs to be updated whenever there is a state change.
	GameState m_currentGameState = GameState::MAIN_MENU;

	// is game running
	bool m_isRunning = false;

	// functions
	void HandleMainMenu();

	void HandlePauseMenu();

	void HandleInGame();

	void HandleExit();

	void ClearScreen();
};
