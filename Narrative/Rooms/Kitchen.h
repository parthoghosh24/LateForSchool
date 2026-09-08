#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class Kitchen
{	
public:	
	static inline constexpr int ID = 4;
	void RenderKitchen(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};