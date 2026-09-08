#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class Washroom
{
public:	
	static inline constexpr int ID = 5;
	void RenderWashroom(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};