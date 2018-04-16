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
	this->name = card_int_to_string(value);
	this->suit = new std::string(suit);
	this->faceDown = faceDown;
}

Card::Card(int value, std::string face, std::string suit, bool faceDown)
{
	this->value = value;
	this->name = new std::string(face);
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

std::string* Card::card_int_to_string(int value)
{
	const std::string enumtext[] = { "Zero", "One", "Two", "Three","Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten" };
	if (value > 10 || value < 2)
		return (NULL);
	return (new std::string(enumtext[value]));
}