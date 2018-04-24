#pragma once

#ifndef RENDER_H
#define RENDER_H

#include "IRender.h"
#include "IInput.h"
#include "IOutput.h"

class Render : public IRender
{
	public:
		Render(IOutput *out, IInput *in);
		~Render();
		void InitPlayerNumber();
	private:
		IOutput * out;
		IInput	*in;
};

#endif