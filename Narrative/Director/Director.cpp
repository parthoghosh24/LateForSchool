#include "Director.h"
#include "../TextScenes/TextScene.h"
#include <iostream>
#include "../../Engine/Engine.h"


void Director::Render(Engine& engine)
{
	if (m_inGameState["currentGameplayState"] == 0)
	{
		
		TextSceneRender(engine);
	}
	else
	{
		// Ensuring enough space before room renders
		std::cout << "\n\n\n\n";

		//Render current room
		Room room;
		room.RenderRoom(m_inGameState["currentRoom"], *this);		
		
	}
		
}

void Director::TextSceneRender(Engine& engine)
{
	m_util.ClearScreen();

	// play text scene
	TextScene textScene;

	// wait for the text scene to be finished
	textScene.RenderTextScene(m_inGameState["currentTextScene"]);

	// Then update the inGameState
	std::unordered_map<std::string, int> gameStateFieldsToUpdate = {
		{"currentGameplayState", 1}, // We will update the current gameplay state to 1 which is interactive gameplay.				
	};

	// Reset game as these are the conversation with ghost
	if (m_inGameState["currentTextScene"] == 5 || m_inGameState["currentTextScene"] == 6 || m_inGameState["currentTextScene"] == 7)
	{
		Reset(engine);
	}
	else
	{
		UpdateInGameState(gameStateFieldsToUpdate);
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

// Update the inventory key with new value
void Director::UpdateInventory(std::string key, int value)
{
	m_inventories[key] = value;
}

// Here we are checking inventory status
bool Director::CheckInventoryStatus(std::string key)
{
	return m_inventories[key] == 0 ? false : true;
}

// Check atleast the player has got ready to leave, we can show another ending option
bool Director::CheckIfGotReady()
{
	return m_inventories["screwdriver"]
		&& m_inventories["shoolBag"]
		&& m_inventories["bathed"]
		&& m_inventories["wornClothes"];
}

// if anything is pending, no good ending
bool Director::CheckInventoryPending()
{
	for (const auto& [key, value] : m_inventories)
	{
		// if any value is 0 that means inventory is pending
		if (value == 0)
		{
			return true;
		}
	}

	// nothing pending
	return false;
}

//Reset everything
void Director::Reset(Engine& engine)
{
	m_inventories = {
		// 0 is false, 1 is true
		{"screwdriver", 0 },
		{"shoolBag", 0 },
		{"bathed", 0 },
		{"wornClothes", 0 },
		{"stoodAtBalcony", 0 },
		{"checkedFridge", 0 },
		{"checkedPhoto", 0 },
		{"checkedFloss", 0 },
		{"usedSink", 0 },
		{"usedToilet", 0 },
	};

	//in game state
	m_inGameState = {
		{"currentGameplayState", 0},
		{"currentTextScene", 1}, // Default is 1
		{"currentRoom", 1},
	};

	engine.PopTopOfGameState();
}
