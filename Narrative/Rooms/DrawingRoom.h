#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class DrawingRoom
{	
public:	
	static inline constexpr int ID = 2;
	void RenderDrawingRoom(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};