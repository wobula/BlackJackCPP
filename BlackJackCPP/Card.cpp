#include "stdafx.h"
#include "Card.h"


Card::Card()
{
}

Card::Card(Id value, Type suit, bool faceDown)
{
	this->value = value;
	this->suit = suit;
	this->faceDown = faceDown;
}

Card::~Card()
{
}

std::string	Card::getSuit(void)
{
	if (this->suit == Heart)
		return ("Heart");
	else if (this->suit == Spade)
		return ("Spade");
	else if (this->suit == Club)
		return ("Club");
	else if (this->suit == Diamond)
		return ("Diamond");
	return (NULL);
}

void	Card::PrintCard(IOutput *out)
{
	out->put(this->value);
	out->put(this->getSuit());
}
void	Card::FlipCard(void)
{
	if (this->faceDown == true)
		this->faceDown = false;
	else
		this->faceDown = true;
}