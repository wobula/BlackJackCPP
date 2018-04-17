#include "stdafx.h"
#include "GameManager.h"
#include "Output.h"

GameManager::GameManager()
{
	this->Out = new Output();
	this->In = new Input();
	this->init(this->In, this->Out);
}

GameManager::~GameManager()
{
	delete this->Out;
	delete this->In;
}

void	GameManager::init(IInput *in, IOutput *out)
{
	std::string tmp;
	while (42)
	{
		tmp = in->put("Please enter the number of players: ");
	}
	
}

void	GameManager::Play(std::vector<IPlayer*> *players)
{
	//this->Out->put()
}

void	GameManager::end(IPlayer *winner)
{

}

/*
void	Play(void);
private:
void	Init(void);
void	End(IPlayer *winner);
*/