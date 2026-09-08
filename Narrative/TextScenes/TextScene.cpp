#include "TextScene.h"
#include "../../Engine/ScreenEntity.hpp"
#include "../../Constants/Constants.h"



void TextScene::RenderTextScene(int index)
{
	switch (index)
	{		
	case 1:
		CreateTextScene(Constants::TEXT_SCENE1_TITLE, Constants::TEXT_SCENE1_DESCRIPTION);
		break;
	case 2:
		CreateTextScene(Constants::TEXT_SCENE2_TITLE, Constants::TEXT_SCENE2_DESCRIPTION);
		break;
	case 3:
		CreateTextScene(Constants::TEXT_SCENE3_TITLE, Constants::TEXT_SCENE3_DESCRIPTION);
		break;
	case 4:
		CreateTextScene(Constants::TEXT_SCENE4_TITLE, Constants::TEXT_SCENE4_DESCRIPTION);
		break;
	case 5:
		CreateTextScene(Constants::TEXT_SCENE5_TITLE, Constants::TEXT_SCENE5_DESCRIPTION);
		break;
	case 6:
		CreateTextScene(Constants::TEXT_SCENE6_TITLE, Constants::TEXT_SCENE6_DESCRIPTION);
		break;
	case 7:
		CreateTextScene(Constants::TEXT_SCENE7_TITLE, Constants::TEXT_SCENE7_DESCRIPTION);
		break;
	case 8:
		CreateTextScene(Constants::TEXT_SCENE8_TITLE, Constants::TEXT_SCENE8_DESCRIPTION);
		break;
	default:
		break;
	}
	
}

void TextScene::CreateTextScene(std::string_view title, std::string_view description)
{
	ScreenEntity textScene(
		title,
		description,

		{ Constants::TEXT_SCENE1_OPTION_1 }
	);
	//dramatize the text scene
	textScene.Render(1);
	std::string choice = textScene.GetValidInput({ Constants::OPTION_ONE });
	if (choice == Constants::OPTION_ONE)
	{
		std::cout << "\n\n\n\n";
	}
}
