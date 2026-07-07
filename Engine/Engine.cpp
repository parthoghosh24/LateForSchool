#include "Engine.h"
#include "../MainMenu/MainMenuScreen.h"
#include "../Narrative/Director/Director.h"
#include <iostream>

void Engine::Initialize()
{
	m_currentGameState = GameState::MAIN_MENU;
	m_isRunning = true;
}

void Engine::Run()
{
	while (m_isRunning)
	{
		// Here the actual state machine runs
		// we would be able to switch between main menu
		// pause menu
		// in game
		// exit

		switch (m_currentGameState)
		{
		case GameState::MAIN_MENU:
			HandleMainMenu();
			break;
		case GameState::PAUSE_MENU:
			HandlePauseMenu();
			break;
		case GameState::IN_GAME:
			HandleInGame();
			break;
		case GameState::EXIT:
			HandleExit();
			break;
		default:
			break;
		}
	}
}

void Engine::HandleMainMenu()
{
	MainMenuScreen mainMenuScreen;
	m_currentGameState = mainMenuScreen.RenderMainMenu();
}

void Engine::HandlePauseMenu()
{
	// handle the pause menu
}

void Engine::HandleInGame()
{
	// handle in game gameplay
	Director director;	
}

void Engine::HandleExit()
{
	m_isRunning = false;
}

void Engine::ClearScreen()
{
	std::cout << "\033[2J\033[1;1H" << std::flush;
}
