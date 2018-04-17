#pragma once

#ifndef  IINPUT_H
#define  IINPUT_H

#include <string>
#include "IOutput.h"

class IInput
{
	public:
		virtual				~IInput() = 0;
		virtual std::string	String(void) = 0;
		virtual std::string String(IOutput *out, std::string prompt) = 0;
		virtual int			Int(void) = 0;
		virtual int			Int(IOutput *out, std::string prompt) = 0;
};

#endif