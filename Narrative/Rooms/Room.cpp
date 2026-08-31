#include "Room.h"
#include "../../Constants/Constants.h"

ScreenEntity Room::RenderRoom(int index)
{
	ScreenEntity room(
		Constants::ROOM1_TITLE,
		Constants::ROOM1_DESCRIPTION ,
		{ 
			Constants::ROOM1_OPTION_1,
			Constants::ROOM1_OPTION_2, 
			Constants::ROOM1_OPTION_3, 
			Constants::ROOM1_OPTION_4, 
			Constants::ROOM1_OPTION_5, 
			Constants::ROOM1_OPTION_P,
		}
	);

	room.Render();

	return room;
}

void Room::HandleChoice(ScreenEntity room, int index)
{
	std::string choice = room.GetValidInput(
		{ 
			Constants::OPTION_ONE, 
			Constants::OPTION_TWO,
			Constants::OPTION_THREE,
			Constants::OPTION_FOUR,
			Constants::OPTION_FIVE,
			Constants::OPTION_P,
		}
	);


	std::cout << "\n\n";

	switch (index)
	{
	case 1:
		HandleRoom1(choice);
		break;
	case 2:
		HandleRoom1(choice);
		break;
	case 3:
		HandleRoom1(choice);
		break;
	case 4:
		HandleRoom1(choice);
		break;
	case 5:
		HandleRoom1(choice);
		break;
	case 6:
		HandleRoom1(choice);
		break;
	case 7:
		HandleRoom1(choice);
		break;
	}
}

void Room::HandleRoom1(std::string choice)
{

	// change game state accordingly
	if (choice == Constants::OPTION_ONE)
	{
		std::cout << Constants::ROOM1_OPTION_1_RESPONSE << "\n\n";
	}
	else if (choice == Constants::OPTION_TWO)
	{
		std::cout << Constants::ROOM1_OPTION_2_RESPONSE << "\n\n";
	}
	else if (choice == Constants::OPTION_THREE)
	{
		std::cout << Constants::ROOM1_OPTION_3_RESPONSE << "\n\n";
	}
	else if (choice == Constants::OPTION_FOUR)
	{
		std::cout << Constants::ROOM1_OPTION_4_RESPONSE << "\n\n";
	}
	else if (choice == Constants::OPTION_FIVE)
	{
		//TODO: switch room
	}
}
