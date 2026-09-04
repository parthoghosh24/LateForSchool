#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class DrawingRoom
{
	static inline int id = 1;
public:
	void RenderDrawingRoom(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};