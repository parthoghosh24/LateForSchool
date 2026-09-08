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
	case 4:
		m_kitchen.RenderKitchen(director);
		break;
	case 5:
		m_washroom.RenderWashroom(director);
		break;
	case 6:
		m_secondBedroom.RenderSecondBedRoom(director);
		break;
	case 7:
		m_exitDoor.RenderExitDoor(director);
		break;
	case 8:
		m_ghostCabinet.RenderGhostCabinet(director);
		break;	
	default:
		break;
	}
}




