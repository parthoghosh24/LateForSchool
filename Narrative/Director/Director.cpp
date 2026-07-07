#include "Director.h"
#include "../TextScenes/TextScene.h"
#include <iostream>

Director::Director()
{
	InitializeGame();
	RunGame();
}

Director::~Director()
{
}

void Director::MarkObjectiveAsDone(int index)
{
	m_objectives[index] = true;
}

bool Director::CheckObjective(int index)
{
	return m_objectives[index];
}

void Director::InitializeGame()
{
	// Start with the intro text scene.
	m_currentInGameState = InGameState::TEXT_SCENE;
	m_isPaused = false;
	m_currentTextScene = 0;

}

void Director::RunGame()
{
	// keep running till the game is paused
	while (!m_isPaused)
	{
		switch (m_currentInGameState)
		{
		case InGameState::TEXT_SCENE:
			HandleTextScene();
			break;
		case InGameState::GAMEPLAY_SCENE:
			HandleGameplayScene();
			break;
		case InGameState::PAUSE:
			HandlePauseGame();
			break;
		default:
			break;
		}
	}
}



void Director::HandleTextScene()
{
	TextScene textScene;
	textScene.RenderTextScene(m_currentTextScene);
	m_isPaused = true;
	
}

void Director::HandleGameplayScene()
{
}

void Director::HandlePauseGame()
{
	m_isPaused = true;
}
