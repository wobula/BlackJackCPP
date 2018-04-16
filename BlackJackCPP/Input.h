#pragma once
#include "IInput.h"
#include <string>
#include <iostream>

class Input : public IInput
{
	public:
		Input();
		~Input();
		std::string in(void);
		std::string in(std::string prompt);
};

