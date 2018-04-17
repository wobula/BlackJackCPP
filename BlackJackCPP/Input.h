#pragma once

#ifndef  INPUT_H
#define  INPUT_H

#include "IInput.h"
#include "IOutput.h"
#include <string>
#include <iostream>

class Input : public IInput
{
	public:
		Input();
		~Input();
		std::string String(void);
		std::string String(IOutput *out, std::string prompt);
		int			Int(void);
		int			Int(IOutput *out, std::string prompt);
};

#endif