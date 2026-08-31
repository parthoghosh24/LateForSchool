#pragma once
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <bitset>
#include "../Rooms/Room.h"
#include "../../Util/Util.h"


class Director
{
public:
	
	// This renders based on current in game state
	void Render();

	// Update the game state
	void UpdateInGameState(std::unordered_map<std::string, int> gameStateFieldsToUpdate);

	void MarkObjectiveAsDone(int index);
	bool CheckObjective(int index);

private:

	Util m_util;

	std::unordered_map<std::string, int> m_inGameState = {
		{"currentGameplayState", 0},
		{"currentTextScene", 0},
		{"currentRoom", 1},
	};


  // Director will hold all sharable values which are as follows:
  // 1) Objective boolean array which will determine how to end the game.
  // Lets keep it 64 bits for now but based on how we progress we would change it.
  std::bitset<64> m_objectives;
  

  
  
  
};
