#pragma once
#include <string>

class IOutput
{
	public:
		virtual ~IOutput() = 0;
		virtual void out(std::string print) = 0;
		virtual void out(int num) = 0;
};

