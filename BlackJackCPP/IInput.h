#pragma once
#include <string>

class IInput
{
	public:
		virtual				~IInput() = 0;
		virtual std::string	in(void) = 0;
		virtual std::string in(std::string prompt) = 0;
};