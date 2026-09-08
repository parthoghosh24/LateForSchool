#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class Balcony
{	
public:
	static inline constexpr int ID = 3;
	void RenderBalcony(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};