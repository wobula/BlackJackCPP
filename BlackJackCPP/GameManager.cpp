#include "stdafx.h"
#include "GameManager.h"
#include "Output.h"
#include "Player.h"

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
	deletePlayers(this->players);
}

void	GameManager::deletePlayers(std::vector<IPlayer*> *players)
{
	players->clear();
	delete players;
}

void	GameManager::init(IInput *in, IOutput *out)
{
	this->playerCount = getPlayerCount(in, out);
	this->players = makePlayers(this->In, this->Out, this->players, playerCount);
}

int		GameManager::getPlayerCount(IInput *in, IOutput *out)
{
	int playerCount;

	while (42)
	{
		playerCount = in->Int(out, "Please enter the number of players: ");
		if (playerCount > 0 && playerCount < 5)
			break;
	}
	out->put("Player count is " + std::to_string(playerCount));
	return (playerCount);
}

std::vector<IPlayer*>*	GameManager::makePlayers(IInput *in, IOutput *out, std::vector<IPlayer*> *players, int playerCount)
{
	std::string name;
	players = new std::vector<IPlayer*>();
	int x = -1;

	while (++x < playerCount)
	{
		name = in->String(out, "Please enter player name: ");
		players->push_back(new Player(name));
	}
	out->put("Player count: " + std::to_string(playerCount));
	x = -1;
	while (++x < playerCount)
		out->put(players->at(x)->name);
	return (players);
}

void	GameManager::Play()
{
	std::cout << "Play function" << std::endl;
	this->end(NULL);
}

void	GameManager::end(IPlayer *winner)
{
	std::cout << "End game" << std::endl;
}