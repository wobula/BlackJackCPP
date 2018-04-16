#pragma once
#include "IOutput.h"
#include <string>
#include <iostream>

class Output : public IOutput
{
	public:
		Output();
		~Output();
		void put(std::string print);
		void put(int num);
};

