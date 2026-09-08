#pragma once

#include <string_view>



class TextScene
{
public:
	void RenderTextScene(int index);
private:
	void CreateTextScene(std::string_view title, std::string_view description);
};