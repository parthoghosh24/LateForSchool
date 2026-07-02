#include <iostream>
#include <string>
#include <vector>

// Screen entity is responsible
// for maintaining the text as well as control data for each screen
// i.e, main menu, pause menu, etc.
// structs are used whenever we are creating our custom data type whereas classes are used
// to hold complex logic
struct ScreenEntity
{
	// The title in the screen
	std::string title;

	// what content we would like to render
	std::string content;

	// input choices which we would like to render to the player
	std::vector<std::string> choices;

	ScreenEntity(std::string mTitle, std::string mContent, std::vector<std::string> mChoices) : title(mTitle), content(mContent), choices(mChoices) {}

	void Render() const
	{
		std::cout << "===========================================================\n";
		std::cout << "                      "<<title<<"\n";
		std::cout << "===========================================================\n\n";
		std::cout << content <<"\n\n";

		for (const auto& choice : choices)
		{
			std::cout << choice << "\n";
		}
		
	}

	// We ensure we are always getting valid input
	std::string GetValidInput(const std::vector<std::string>& validKeys) const
	{
		std::string input;

		// We would keep on trying till we get a correct option
		while (true)
		{
			// Ask for choice
			std::cout << "\nEnter the choice digit(0-9): ";

			// get the correct choice with getline. getLine is more like an
			// industry standard practice instead of the default cin input.
			// With getline, we don't need to worry about line breaks, tabs, spaces and such.
			std::getline(std::cin, input);
			for (const auto& key : validKeys)
			{
				if (input == key)
				{
					return input;
				}
			}

			std::cout << "\nPlease enter a correct choice. ";
		}
	}

	

};
