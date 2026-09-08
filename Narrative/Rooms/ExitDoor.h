#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class ExitDoor
{
public:	
	static inline constexpr int ID = 7;
	void RenderExitDoor(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};