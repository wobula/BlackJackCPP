#pragma once
#include "IOutput.h"
#include <string>
#include <iostream>

class Output : public IOutput
{
	public:
		Output();
		~Output();
		void out(std::string print);
		void out(int num);
};

