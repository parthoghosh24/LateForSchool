#pragma once
#include "../../Engine/ScreenEntity.hpp"

class Director;

class GhostCabinet
{
public:	
	static inline constexpr int ID = 8;
	void RenderGhostCabinet(Director& director);
private:
	ScreenEntity Render(Director& director);
	void HandleChoice(ScreenEntity room, Director& director);
};