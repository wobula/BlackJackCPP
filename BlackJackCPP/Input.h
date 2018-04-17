#pragma once

#ifndef  INPUT_H
#define  INPUT_H

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

#endif