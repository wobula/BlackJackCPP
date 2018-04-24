#include "stdafx.h"
#include "Render.h"


Render::Render(IOutput *out, IInput *in) : IRender(out, in)
{
	this->in = in;
	this->out = out;
}


Render::~Render()
{
}

void	Render::InitPlayerNumber()
{
	this->out->put("Please enter the number of players: ");
}
