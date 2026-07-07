#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <bitset>

enum class InGameState
{
	TEXT_SCENE, // Similar to cutscenes
	GAMEPLAY_SCENE, // Interactive gameplay parts
	PAUSE // pause menu
};

class Director
{
public:
  Director();
  ~Director();

  void MarkObjectiveAsDone(int index);
  bool CheckObjective(int index);

private:

  // This method will initialize all game related data
  void InitializeGame();

  void RunGame();

  // The game always starts with the "text scene"
  InGameState m_currentInGameState = InGameState::TEXT_SCENE;

  // This would be used as the condition to check whether we want to run the game
  bool m_isPaused = false;

  // Current text scene. This would be updated whenever new cutscene would play
  int m_currentTextScene = 0;

  void HandleTextScene();

  void HandleGameplayScene();

  void HandlePauseGame();

  // Director will hold all sharable values which are as follows:
  // 1) Objective boolean array which will determine how to end the game.
  // Lets keep it 64 bits for now but based on how we progress we would change it.
  std::bitset<64> m_objectives;
  

  
  
  
};
