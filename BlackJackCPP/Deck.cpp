#include "stdafx.h"
#include "Deck.h"


Deck::Deck()
{
	std::cout << "Making your deck of cards!" << std::endl;
}


Deck::~Deck()
{
	std::cout << "Deleting your deck of cards!" << std::endl;

}

/*
for ( int fooInt = One; fooInt != Last; fooInt++ )
{
Foo foo = static_cast<Foo>(fooInt);
// ...
}
*/