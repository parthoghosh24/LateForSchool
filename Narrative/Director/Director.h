#pragma once
#include <iostream>
#include <map>
#include <vector>
class Director
{
public:
  Director();
  ~Director();
private:

  // This method will initialize all game related data
  void InitializeGame();

  // Room map contains the directed graph in which key is the source room id and
  // value is the list of destination rooms.
  std::map<std::string, std::vector<std:string>> roomMap = {}
  
};
