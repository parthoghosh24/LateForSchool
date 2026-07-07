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

	// Main menu
	inline constexpr std::string_view MAIN_MENU_TITLE = "LATE FOR SCHOOL";
	inline constexpr std::string_view MAIN_MENU_OPTION_1 = "[1] Start new game";
	inline constexpr std::string_view MAIN_MENU_OPTION_2 = "[2] Exit game";

	// Pause menu
	inline constexpr std::string_view PAUSE_MENU_TITLE = "PAUSED";
	inline constexpr std::string_view PAUSE_MENU_OPTION_1 = "[1] Resume";
	inline constexpr std::string_view PAUSE_MENU_OPTION_2 = "[2] Go to main menu";

	// Text scenes

	// Text scene 1
	inline constexpr std::string_view TEXT_SCENE1_TITLE = "INTRODUCTION";
	inline constexpr std::string_view TEXT_SCENE1_DESCRIPTION = "You bolt upright, your heart hammering because for a split second, you swore a face was staring back at you from the ceiling. \"What the... ? \" you whisper. Then your brain catches up just a hallucination. Sunlight is streaming through the window, reminding you that you're supposed to be somewhere. \"Oh no, I'm late for school!\". You get off from the mattress on the floor, scratch your head, and scan the room.";
	inline constexpr std::string_view TEXT_SCENE1_OPTION_1 = "[1] Press to continue";
	
	// Rooms

	// Room 1
	inline constexpr std::string_view ROOM1_NAME = "Master Bedroom";
	inline constexpr std::string_view ROOM1_DESCRIPTION = "Big master bedroom with a king size mattress lying on the floor almost covering the home. There is a gate connecting to outside balcony. There is a dresser in with all the drawers unlocked. A big closet containing clothes. There is an exit door connecting to main drawing room.";
}

