#pragma once
#include <string>

class IOutput
{
	public:
		virtual ~IOutput() = 0;
		virtual void put(std::string print) = 0;
		virtual void put(int num) = 0;
};

