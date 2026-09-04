#include "Room.h"
#include "../../Constants/Constants.h"
#include "../Director/Director.h"

void Room::RenderRoom(int index, Director& director)
{
	switch (index)
	{
	case 1:
		m_masterBedroom.RenderMasterBedRoom(director);
		break;
	case 2:
		m_drawingRoom.RenderDrawingRoom(director);
		break;
	case 3:
		m_balcony.RenderBalcony(director);
		break;
	default:
		break;
	}
}




