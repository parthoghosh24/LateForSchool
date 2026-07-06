#pragma once

#include <string>
#include <map>

/*
* This class is responsible for 
* holding the data structure for the room
*/

struct Interactive
{
	std::string id;
	std::string label;
	std::string description;
};

class Room
{
public:
	//constructor
	Room(std::string name, std::string description) : m_name(name), m_description(description) {}

	//Getters - This is are kind of inline macro functions and don't need to be defined in the actual CPP class.
	std::string GetName() const { return m_name; };
	std::string GetDescription() const { return m_description; };

	// connectors (roomExit to room)
	void Add(std::string exitLabel, std::string roomName);

	// interactables (object inside the room)
	void AddInterative();

private:
	std::string m_name;
	std::string m_description;
	std::map<std::string, std::string> m_connectors;
};