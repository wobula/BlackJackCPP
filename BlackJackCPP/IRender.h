#pragma once
#ifndef IRENDER_H
#define IRENDER_H

#include "IHand.h"
#include "IInput.h"
#include "IOutput.h"

class IRender
{
	public:
		IRender(IOutput *out, IInput *in);
		virtual ~IRender() = 0;
		virtual void InitPlayerNumber() = 0;
		//virtual void InitPlayerNames() = 0;
		//virtual void DisplayHand(IHand *hand) = 0;
		//virtual void DisplayPlayerMenu() = 0;
	private:
		IOutput *out;
		IInput	*in;
};

#endif