#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class MasterBedRoom
{
	static inline int id = 1;
public:
	void RenderMasterBedRoom(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};