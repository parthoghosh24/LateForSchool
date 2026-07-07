#include "Util.h"
#include <string_view>
#include <iostream>
#include <thread>
#include <chrono>

void Util::TypeWriteIt(std::string_view text, int delayMs)
{
	for (char character : text)
	{
		std::cout << character << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
	}
}
