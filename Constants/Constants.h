#pragma once
#include <string_view>

namespace Constants {
	// Option keys
	inline constexpr std::string_view OPTION_ZERO = "0";
	inline constexpr std::string_view OPTION_ONE = "1";
	inline constexpr std::string_view OPTION_TWO = "2";
	inline constexpr std::string_view OPTION_THREE = "3";
	inline constexpr std::string_view OPTION_FOUR = "4";
	inline constexpr std::string_view OPTION_FIVE = "5";
	inline constexpr std::string_view OPTION_SIX = "6";
	inline constexpr std::string_view OPTION_SEVEN = "7";
	inline constexpr std::string_view OPTION_EIGHT = "8";
	inline constexpr std::string_view OPTION_NINE = "9";
	inline constexpr std::string_view OPTION_P = "p";

	// Main menu
	inline constexpr std::string_view MAIN_MENU_TITLE = "LATE FOR SCHOOL";
	inline constexpr std::string_view MAIN_MENU_OPTION_1 = "[1] Start new game";
	inline constexpr std::string_view MAIN_MENU_OPTION_2 = "[2] Exit game";

	// Pause menu
	inline constexpr std::string_view PAUSE_MENU_TITLE = "GAME PAUSED";
	inline constexpr std::string_view PAUSE_MENU_OPTION_1 = "[1] Resume";
	inline constexpr std::string_view PAUSE_MENU_OPTION_2 = "[2] Go to main menu";

	// Text scenes

	// Text scene 1
	inline constexpr std::string_view TEXT_SCENE1_TITLE = "INTRODUCTION";
	inline constexpr std::string_view TEXT_SCENE1_DESCRIPTION = "You bolt upright, your heart hammering because for a split second, you swore a face was staring back at you from the ceiling. \"What the... ? \" you whisper. Then your brain catches up that it was just a hallucination. Sunlight is streaming through the window, reminding you that you're supposed to be somewhere. \"Oh no, I'm late for school!\". You get off from the mattress on the floor, scratch your head, and scan the room.";
	inline constexpr std::string_view TEXT_SCENE1_OPTION_1 = "[1] Press to continue";
	
	// Rooms

	// Room 1 (Master Bedroom)
	inline constexpr std::string_view ROOM1_TITLE = "Master Bedroom";
	inline constexpr std::string_view ROOM1_DESCRIPTION = "Big master bedroom with a king size mattress lying on the floor almost covering the home. There is a sliding door connecting to outside balcony. There is a dresser in with all the drawers unlocked. A big closet containing clothes. There is an exit door going to main drawing room.";
	inline constexpr std::string_view ROOM1_OPTION_1 = "[1] Check Mattress";
	inline constexpr std::string_view ROOM1_OPTION_2 = "[2] Open door to outside balcony";
	inline constexpr std::string_view ROOM1_OPTION_3 = "[3] Check Dresser";
	inline constexpr std::string_view ROOM1_OPTION_4 = "[4] Open closet to get clothes";
	inline constexpr std::string_view ROOM1_OPTION_5 = "[5] Go to main drawing room";
	inline constexpr std::string_view ROOM1_OPTION_P = "[P/p] Pause game";

	inline constexpr std::string_view ROOM1_OPTION_1_RESPONSE = "I have already arranged the bedding on the Mattress and now there is nothing left to do.";
	inline constexpr std::string_view ROOM1_OPTION_2_RESPONSE = "The door can't be fully opened so can't go out to balcony from here.";
	inline constexpr std::string_view ROOM1_OPTION_3_RESPONSE = "The first drawer is stuck and needs a screwdriver to unlock. My undergarments are inside.";
	inline constexpr std::string_view ROOM1_OPTION_4_RESPONSE = "Can't wear clothes right now. Need to take a bath first!";

	// Room 2 (Drawing Room)
	inline constexpr std::string_view ROOM2_TITLE = "Drawing Room";
	inline constexpr std::string_view ROOM2_DESCRIPTION = "There is a dining table with some fruits on it besides the kitchen island. There is a TV sitting on a TV stand with drawers. A couch is there opposite to the TV. There is a door connecting to Balcony.";
	inline constexpr std::string_view ROOM2_OPTION_1 = "[1] Check Dining table.";
	inline constexpr std::string_view ROOM2_OPTION_2 = "[2] Check TV and TV stand.";
	inline constexpr std::string_view ROOM2_OPTION_3 = "[3] Check Couch";
	inline constexpr std::string_view ROOM2_OPTION_4 = "[4] Go to Kitchen";
	inline constexpr std::string_view ROOM2_OPTION_5 = "[5] Go to Balcony";
	inline constexpr std::string_view ROOM2_OPTION_6 = "[6] Go to Main Bedroom";
	inline constexpr std::string_view ROOM2_OPTION_P = "[P/p] Pause game";

	inline constexpr std::string_view ROOM2_OPTION_1_RESPONSE = "There are some fruits lying on Dining table but I don't feel like eating them. I will grab something on the go.";
	inline constexpr std::string_view ROOM2_OPTION_2_RESPONSE = "Don't have time to watch TV right now. There is nothing important in TV stand drawers.";
	inline constexpr std::string_view ROOM2_OPTION_3_RESPONSE = "Don't have time to waste on couch. Gotta hurry up as I am running late.";

	// Room 3 (Balcony)
	inline constexpr std::string_view ROOM3_TITLE = "Balcony";
	inline constexpr std::string_view ROOM3_DESCRIPTION = "Regular balcony on 12th floor. City is looking beautiful and busy as usual.";
	inline constexpr std::string_view ROOM3_OPTION_1 = "[1] Stand at Balcony.";
	inline constexpr std::string_view ROOM3_OPTION_2 = "[2] Go back to Drawing Room.";	
	inline constexpr std::string_view ROOM3_OPTION_P = "[P/p] Pause game";

	inline constexpr std::string_view ROOM3_OPTION_1_RESPONSE = "Wow, it is really high! How he did it?... Why he did it?... Nevermind, I have to go and get ready.";

	// Room 4 (Kitchen)
	inline constexpr std::string_view ROOM4_TITLE = "Kitchen";
	inline constexpr std::string_view ROOM4_DESCRIPTION = "Kitchen island has some utensils. There is a drawer in the island. Opposite to the island is a burner and fridge. Washroom is at the opposite of the wall which is connecting the island.";
	inline constexpr std::string_view ROOM4_OPTION_1 = "[1] Check Island.";
	inline constexpr std::string_view ROOM4_OPTION_2 = "[2] Check Drawer.";
	inline constexpr std::string_view ROOM4_OPTION_3 = "[3] Check Burner.";
	inline constexpr std::string_view ROOM4_OPTION_4 = "[4] Check fridge.";
	inline constexpr std::string_view ROOM4_OPTION_5 = "[5] Go back to Drawing room.";
	inline constexpr std::string_view ROOM4_OPTION_6 = "[6] Go to Washroom.";
	inline constexpr std::string_view ROOM4_OPTION_7 = "[7] Go to the dark room.";
	inline constexpr std::string_view ROOM4_OPTION_P = "[P/p] Pause game";

	inline constexpr std::string_view ROOM4_OPTION_1_RESPONSE = "Wow, it is really high! How he did it?... Nevermind, I have to get ready.";
}

