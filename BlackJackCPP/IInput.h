#pragma once

#ifndef  IINPUT_H
#define  IINPUT_H

#include <string>

class IInput
{
	public:
		virtual				~IInput() = 0;
		virtual std::string	in(void) = 0;
		virtual std::string in(std::string prompt) = 0;
};

#endif