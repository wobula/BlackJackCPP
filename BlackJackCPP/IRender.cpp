#include "stdafx.h"
#include "IRender.h"

IRender::IRender(IOutput *out, IInput *in)
{
	this->out = out;
	this->in = in;
}

IRender::~IRender()
{
}
