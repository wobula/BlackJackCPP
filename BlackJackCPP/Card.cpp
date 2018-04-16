#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	this->value = -1;
	this->suit = NULL;
	this->faceDown = faceDown;
}

Card::Card(int value, std::string suit, bool faceDown)
{
	this->value = value;
	this->suit = new std::string(suit);
	this->faceDown = faceDown;
}

Card::~Card()
{
}

void	Card::PrintCard(IOutput *out)
{
	out->put(this->value);
	out->put(this->suit);
}
void	Card::FlipCard(void)
{
	if (this->faceDown == true)
		this->faceDown = false;
	else
		this->faceDown = true;
}