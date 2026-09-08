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
	inline constexpr std::string_view PAUSE_MENU_TITLE = "GAME PAUSED";
	inline constexpr std::string_view PAUSE_MENU_OPTION_1 = "[1] Resume";
	inline constexpr std::string_view PAUSE_MENU_OPTION_2 = "[2] Go to main menu";

	// Text scenes

	// Text scene 1
	inline constexpr std::string_view TEXT_SCENE1_TITLE = "INTRODUCTION";
	inline constexpr std::string_view TEXT_SCENE1_DESCRIPTION = "You bolt upright, your heart hammering because for a split second, you swore a face was staring back at you from the ceiling. \"What the... ? \" you whisper. Then your brain catches up that it was just a hallucination. Sunlight is streaming through the window, reminding you that you're supposed to be somewhere. \"Oh no, I'm late for school!\". You get off from the mattress on the floor, scratch your head, and scan the room.";
	inline constexpr std::string_view TEXT_SCENE1_OPTION_1 = "[1] Press to continue";

	// Text scene 2
	inline constexpr std::string_view TEXT_SCENE2_TITLE = "THE TRIP";
	inline constexpr std::string_view TEXT_SCENE2_DESCRIPTION = "You found the photo of the trip you all went together. You saw him in it. It reminded of the good times you spent on that vacation. You smiled but then suddenly remembered what he did. You whispered to yourself, \"Why?\"";
	inline constexpr std::string_view TEXT_SCENE2_OPTION_1 = "[1] Press to continue";

	// Text scene 3
	inline constexpr std::string_view TEXT_SCENE3_TITLE = "THE BALCONY";
	inline constexpr std::string_view TEXT_SCENE3_DESCRIPTION = "You looked down. You are on 12th floor so you felt bit dizzy while looking down... \"Wow, it is really high! How he did it?... Why he did it?... Nevermind, I have to go and get ready.\"";
	inline constexpr std::string_view TEXT_SCENE3_OPTION_1 = "[1] Press to continue";

	// Text scene 4
	inline constexpr std::string_view TEXT_SCENE4_TITLE = "THE CANDIES";
	inline constexpr std::string_view TEXT_SCENE4_DESCRIPTION = "You opened the fridge to see if you can quickly grab something to eat. You rummaged through the fridge. Suddenly you found the packet of candies you bought for him. \"He used to love these. He didn't even take these before leaving. How could you do it even after doing so much for you?.... I am not hungry anymore.\" You close the fridge.";
	inline constexpr std::string_view TEXT_SCENE4_OPTION_1 = "[1] Press to continue";

	// Endings

	// Bad ending 5
	inline constexpr std::string_view TEXT_SCENE5_TITLE = "Conversation with the ghost";
	inline constexpr std::string_view TEXT_SCENE5_DESCRIPTION = "You: \"I miss you... Why did you leave us like that? I am tired and unable to make sense of anything.\" \n\n\n\n Ghost: \" I miss you too.\"... smiles. \"Come, join me. You know how I reached here. Once you come join me, you don't need to worry about anything. No school, career, life... anything\". \n\n\n\n You walk to the balcony and jump from 12th floor. You land on your back of your head. Your bones break and limbs tear. You skull cracks open and your brain scatters. You wince in pain but could not move. Your eyes get filled with blood. It slowly gets dark... Then you open your eyes. You could see him standing in front of you. You get up, hold his hands and leave.";
	inline constexpr std::string_view TEXT_SCENE5_OPTION_1 = "[1] Press to continue";

	// Neutral ending 6
	inline constexpr std::string_view TEXT_SCENE6_TITLE = "Conversation with the ghost";
	inline constexpr std::string_view TEXT_SCENE6_DESCRIPTION = "You: \"I hate you! How could you do this to us? How could you be so selfish? You didn't think about what your people would go through. I hate you from the deepest core of my heart!\" \n\n\n\n Ghost: Doesn't say anything, smiles and goes back into hiding. \n\n\n\n You are scared and angry at the same time. You take the keys with shaking hands and close the closet. You are ready to leave the home. You step out of your condo and lock the door from outside. You leave for the school feeling sorrow, anger and fear. You are fearful that you will see him again whenever you open the closet.";
	inline constexpr std::string_view TEXT_SCENE6_OPTION_1 = "[1] Press to continue";

	// Good ending 7
	inline constexpr std::string_view TEXT_SCENE7_TITLE = "Conversation with the ghost";
	inline constexpr std::string_view TEXT_SCENE7_DESCRIPTION = "You: \"I love you and forgive you! What you committed is a sin but you must have had your reasons. You must have had lot of dissapointment and pain which drove you to do this. I understand. But we should not and choose not to suffer due to your decision. Therefore, I and rest of your folks, we forgive you for what you done. May you rest in peace and be happy wherever you are.\" Saying this you close your eyes. \n\n\n\n You open your eyes and don't see anyone in the closet. You feel light. You smile and collect the keys. You step out of the home, lock the door and leave for the school with optimism and hope that everything will be good.";
	inline constexpr std::string_view TEXT_SCENE7_OPTION_1 = "[1] Press to continue";

	// Text scene 8
	inline constexpr std::string_view TEXT_SCENE8_TITLE = "THE FLOSS";
	inline constexpr std::string_view TEXT_SCENE8_DESCRIPTION = "You opened the cabinet to find your deodorant. Your eyes discover the floss pack. \"Oh, these are here. I bought them for him. He never used these.\" You close the door.";
	inline constexpr std::string_view TEXT_SCENE8_OPTION_1 = "[1] Press to continue";
	
	// Rooms

	// Room 1 (Master Bedroom)
	inline constexpr std::string_view ROOM1_TITLE = "Master Bedroom";
	inline constexpr std::string_view ROOM1_DESCRIPTION = "Big master bedroom with a king size mattress lying on the floor almost covering the home. There is a sliding door connecting to outside balcony. There is a dresser in with all the drawers unlocked. A big closet containing clothes. There is an exit door going to main drawing room.";
	inline constexpr std::string_view ROOM1_OPTION_1 = "[1] Check Mattress";
	inline constexpr std::string_view ROOM1_OPTION_2 = "[2] Open door to outside balcony";
	inline constexpr std::string_view ROOM1_OPTION_3 = "[3] Check Dresser";
	inline constexpr std::string_view ROOM1_OPTION_4 = "[4] Open closet to get clothes";
	inline constexpr std::string_view ROOM1_OPTION_5 = "[5] Go to main drawing room";	

	inline constexpr std::string_view ROOM1_OPTION_1_RESPONSE = "I have already arranged the bedding on the Mattress and now there is nothing left to do.";
	inline constexpr std::string_view ROOM1_OPTION_2_RESPONSE = "The door can't be fully opened so can't go out to balcony from here.";
	inline constexpr std::string_view ROOM1_OPTION_3_RESPONSE = "The first drawer is stuck and needs a screwdriver to unlock. My undergarments are inside.";
	inline constexpr std::string_view ROOM1_OPTION_4_RESPONSE_1 = "Can't wear clothes right now. Need to take a bath first!";
	inline constexpr std::string_view ROOM1_OPTION_4_RESPONSE_2 = "Hmm, lets see what shall I wear ... you got ready!";

	// Room 2 (Drawing Room)
	inline constexpr std::string_view ROOM2_TITLE = "Drawing Room";
	inline constexpr std::string_view ROOM2_DESCRIPTION = "There is a dining table with some fruits on it besides the kitchen island. There is a TV sitting on a TV stand with drawers. A couch is there opposite to the TV. There is a door connecting to Balcony.";
	inline constexpr std::string_view ROOM2_OPTION_1 = "[1] Check Dining table.";
	inline constexpr std::string_view ROOM2_OPTION_2 = "[2] Check TV and TV stand.";
	inline constexpr std::string_view ROOM2_OPTION_3 = "[3] Check Couch";
	inline constexpr std::string_view ROOM2_OPTION_4 = "[4] Go to Kitchen";
	inline constexpr std::string_view ROOM2_OPTION_5 = "[5] Go to Balcony";
	inline constexpr std::string_view ROOM2_OPTION_6 = "[6] Go to Main Bedroom";	

	inline constexpr std::string_view ROOM2_OPTION_1_RESPONSE = "There are some fruits lying on Dining table but I don't feel like eating them. I will grab something on the go.";
	inline constexpr std::string_view ROOM2_OPTION_2_RESPONSE = "Don't have time to watch TV right now. There is nothing important in TV stand drawers.";
	inline constexpr std::string_view ROOM2_OPTION_3_RESPONSE_1 = "My school bag is lying on it but I need to get ready first before I pick it up.";
	inline constexpr std::string_view ROOM2_OPTION_3_RESPONSE_2 = "Gotta wear clothes even before I pick up my bag.";
	inline constexpr std::string_view ROOM2_OPTION_3_RESPONSE_3 = "Can't forget the bag.... Picked up school bag";
	inline constexpr std::string_view ROOM2_OPTION_3_RESPONSE_4 = "There is nothing else on the couch which is of importance.";

	// Room 3 (Balcony)
	inline constexpr std::string_view ROOM3_TITLE = "Balcony";
	inline constexpr std::string_view ROOM3_DESCRIPTION = "Regular balcony on 12th floor. City is looking beautiful and busy as usual.";
	inline constexpr std::string_view ROOM3_OPTION_1 = "[1] Stand at Balcony.";
	inline constexpr std::string_view ROOM3_OPTION_2 = "[2] Go back to Drawing Room.";	

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
	inline constexpr std::string_view ROOM4_OPTION_8 = "[8] Exit the condo.";	

	inline constexpr std::string_view ROOM4_OPTION_1_RESPONSE = "Nothing important on the island.";
	inline constexpr std::string_view ROOM4_OPTION_2_RESPONSE = "Thank god I found the screwdriver.... Picked up screwdriver.";
	inline constexpr std::string_view ROOM4_OPTION_3_RESPONSE = "Don't have time to cook. Will pick something on the go.";	

	// Room 5 (Washroom)
	inline constexpr std::string_view ROOM5_TITLE = "Washroom";
	inline constexpr std::string_view ROOM5_DESCRIPTION = "Regular washroom which has a sink where I could brush teeth and wash face. There is a seated toilet with toilet paper roll. A bath tub for taking bath.";
	inline constexpr std::string_view ROOM5_OPTION_1 = "[1] Use Sink.";
	inline constexpr std::string_view ROOM5_OPTION_2 = "[2] Use Toilet.";
	inline constexpr std::string_view ROOM5_OPTION_3 = "[3] Use bathtub.";
	inline constexpr std::string_view ROOM5_OPTION_4 = "[4] Check sink cabinet.";
	inline constexpr std::string_view ROOM5_OPTION_5 = "[5] Go back to kitchen.";	

	inline constexpr std::string_view ROOM5_OPTION_1_RESPONSE_1 = "I feel fresh after brushing and washing my face.";
	inline constexpr std::string_view ROOM5_OPTION_1_RESPONSE_2 = "I don't need to use sink. I should not waste anymore time.";
	inline constexpr std::string_view ROOM5_OPTION_2_RESPONSE_1 = "I feel relieved after using the toiled.";
	inline constexpr std::string_view ROOM5_OPTION_2_RESPONSE_2 = "I don't have to use toilet anymore. Need to hurry now.";
	inline constexpr std::string_view ROOM5_OPTION_3_RESPONSE_1 = "I need to wash my face and use the toilet before I take bath.";
	inline constexpr std::string_view ROOM5_OPTION_3_RESPONSE_2 = "I feel fresh and clean after this bath.";
	inline constexpr std::string_view ROOM5_OPTION_3_RESPONSE_3 = "I don't have to use the bathtub anymore.";	

	// Room 6 (Dark room)
	inline constexpr std::string_view ROOM6_TITLE = "The second bed room";
	inline constexpr std::string_view ROOM6_DESCRIPTION = "This room is dark as the lamp is damaged and has not been changed yet. There is a dresser. Besides the dresser, there is a bed. There is a sliding closet which has clothes and the keys.";
	inline constexpr std::string_view ROOM6_OPTION_1 = "[1] Check Dresser.";
	inline constexpr std::string_view ROOM6_OPTION_2 = "[2] Check bed.";
	inline constexpr std::string_view ROOM6_OPTION_3 = "[3] Check closet.";
	inline constexpr std::string_view ROOM6_OPTION_4 = "[4] Go back to kitchen.";	

	inline constexpr std::string_view ROOM6_OPTION_1_RESPONSE = "There is nothing important in the dresser. I should not waste time I am already late.";
	inline constexpr std::string_view ROOM6_OPTION_2_RESPONSE = "I don't have time to spend on the bed.";
	inline constexpr std::string_view ROOM6_OPTION_3_RESPONSE = "Whhha....Hww....? How is this is possible? What are you doing here?";	

	// Room 7 (Exit door)
	inline constexpr std::string_view ROOM7_TITLE = "Exit door of the condo";
	inline constexpr std::string_view ROOM7_DESCRIPTION = "Main door to which is both entry and exit from the condo.";
	inline constexpr std::string_view ROOM7_OPTION_1 = "[1] Use Door.";
	inline constexpr std::string_view ROOM7_OPTION_2 = "[2] Go back to kitchen.";

	inline constexpr std::string_view ROOM7_OPTION_1_RESPONSE = "I need the key so that I could lock the door from outside. Can't leave just like that!";

	// Room 8 (Ghost cabinet)
	inline constexpr std::string_view GHOST_TITLE = "The Ghost";
	inline constexpr std::string_view GHOST_DESCRIPTION = "You jolt and say \"Whhha....Hww.... ? How is this possible ? What are you doing here ? \" \n\n\n\nThere is a man deep squatting inside the closet with pale grey and extremely wrinkled skin. His eyeballs are pale. There is blood and gray matter oozing from his dried blood soaked head. His bones appear to be broken. He is smiling covering the wall where the keys are and staring at you constantly. You are scared to death! But then you realized it is him and controlled your nerves.";
	inline constexpr std::string_view GHOST_OPTION_1 = "[1] I miss you.";
	inline constexpr std::string_view GHOST_OPTION_2 = "[2] I hate you!";
	inline constexpr std::string_view GHOST_OPTION_3 = "[3] I love and forgive you.";
}

