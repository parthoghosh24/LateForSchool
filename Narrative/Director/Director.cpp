#include "Director.h"
#include "../TextScenes/TextScene.h"
#include <iostream>


void Director::Render()
{
	if (m_inGameState["currentGameplayState"] == 0)
	{
		m_util.ClearScreen();

		// play text scene
		TextScene textScene;

		// wait for the text scene to be finished
		textScene.RenderTextScene(m_inGameState["currentTextScene"]);

		// Then update the inGameState
		std::unordered_map<std::string, int> gameStateFieldsToUpdate;

		// We will update the current gameplay state to 1 which is interactive gameplay.
		gameStateFieldsToUpdate["currentGameplayState"] = 1;

		// we will increment the current text scene so that whenever next we will play textscene
		// The new one will be played
		gameStateFieldsToUpdate["currentTextScene"] = m_inGameState["currentTextScene"] + 1;

		UpdateInGameState(gameStateFieldsToUpdate);
		
	}
	else
	{
		//Render current room
		Room room;
		ScreenEntity roomScreen = room.RenderRoom(m_inGameState["currentRoom"]);		
		room.HandleChoice(roomScreen, m_inGameState["currentRoom"]);
		
	}
		
}

// Here we are getting a map of fields to be updated with their new values and update the existing map with it
void Director::UpdateInGameState(std::unordered_map<std::string, int> gameStateFieldsToUpdate)
{
	// loop through each item of gameStateFields and update the corresponding values in inGameState map
	for (const auto& [key, value] : gameStateFieldsToUpdate)
	{
		m_inGameState[key] = value;
	}
}

void Director::MarkObjectiveAsDone(int index)
{
	m_objectives[index] = true;
}

bool Director::CheckObjective(int index)
{
	return m_objectives[index];
}
