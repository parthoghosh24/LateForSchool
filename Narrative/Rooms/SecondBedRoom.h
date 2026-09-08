#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class SecondBedRoom
{
public:	
	static inline constexpr int ID = 6;
	void RenderSecondBedRoom(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};