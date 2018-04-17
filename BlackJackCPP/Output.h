#pragma once

#ifndef OUTPUT_H
#define OUTPUT_H

#include "IOutput.h"
#include <string>
#include <iostream>

class Output : public IOutput
{
	public:
		Output();
		~Output();
		void put(std::string print);
		void put(std::string *print);
		void put(int num);
};

#endif