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
		std::string put(void);
		std::string put(std::string prompt);
};

#endif