#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class Balcony
{
	static inline int id = 1;
public:
	void RenderBalcony(Director& director);
private:
	ScreenEntity Render();
	void HandleChoice(ScreenEntity room, Director& director);
};