#include "Engine.h"
#include "../Narrative/Director/Director.h"
#include <iostream>

void Engine::Initialize()
{	
	m_gameState.push(GameState::MAIN_MENU);
}

void Engine::Run()
{
	// game running if stack has anything in it
	while (!m_gameState.empty())
	{

		// update Gamestate
		UpdateState();
		
	}
}

/// <summary>
/// This method is responsible for handling state updationg for the entire game
/// Whatever is at the top of stack, gets rendered.
/// </summary>
void Engine::UpdateState()
{
	switch (m_gameState.top())
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


void Engine::HandleMainMenu()
{
	
	// Render screen
	ScreenEntity mainMenu = m_mainMenuScreen.RenderMainMenu();

	// Handle Input
	GameState stateToPush = m_mainMenuScreen.HandleChoice(mainMenu);

	// Update the gameState stack
	m_gameState.push(stateToPush);
}

void Engine::HandlePauseMenu()
{
	// handle the pause menu

}

void Engine::HandleInGame()
{	
	// handle in game gameplay
	m_inGameDirector.Render();
}

void Engine::HandleExit()
{
	// empty the entire stack
	while (!m_gameState.empty())
	{
		m_gameState.pop();
	}
}
