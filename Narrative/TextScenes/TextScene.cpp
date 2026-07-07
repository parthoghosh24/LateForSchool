#include "TextScene.h"
#include "../../Engine/ScreenEntity.hpp"
#include "../../Constants/Constants.h"

void TextScene::RenderTextScene(int index)
{
	switch (index)
	{
	case 0:
	{
		ScreenEntity textScene(
			Constants::TEXT_SCENE1_TITLE,
			Constants::TEXT_SCENE1_DESCRIPTION,

			{ Constants::TEXT_SCENE1_OPTION_1 }
		);
		//dramatize the text scene
		textScene.Render(1);
		std::string choice = textScene.GetValidInput({ Constants::OPTION_ONE });
		if (choice == Constants::OPTION_ONE)
		{
			std::cout << "Load the interactive gameplay";
		}
	}
		
		break;
	case 1:
		break;
	default:
		break;
	}
	
}
