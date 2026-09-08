#pragma once
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <bitset>
#include <string>
#include "../Rooms/Room.h"
#include "../../Util/Util.h"

// Forward declare the engine
class Engine;

class Director
{
public:
	
	// This renders based on current in game state
	void Render(Engine& engine);

	void TextSceneRender(Engine& engine);

	// Update the game state
	void UpdateInGameState(std::unordered_map<std::string, int> gameStateFieldsToUpdate);

	// Update the inventory state
	void UpdateInventory(std::string key, int value);

	//Check the status of inventory
	bool CheckInventoryStatus(std::string key);

	bool CheckInventoryPending();

	bool CheckIfGotReady();

	void Reset(Engine& engine);



private:

	Util m_util;

	// inventory map
	std::unordered_map<std::string, int> m_inventories = {
		// 0 is false, 1 is true
		{"screwdriver", 0 },
		{"shoolBag", 0 },
		{"bathed", 0 },
		{"wornClothes", 0 },		
		{"checkedFridge", 0 },
		{"checkedPhoto", 0 },
		{"checkedFloss", 0 },
		{"usedSink", 0 },
		{"usedToilet", 0 },
		{"youRemembered", 0 },
	};

	//in game state
	std::unordered_map<std::string, int> m_inGameState = {
		{"currentGameplayState", 0},
		{"currentTextScene", 1}, // Default is 1
		{"currentRoom", 1},
	};  
  

  
  
  
};
