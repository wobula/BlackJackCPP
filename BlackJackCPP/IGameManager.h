#pragma once

#ifndef IGAMEMANAGER_H
#define IGAMEMANAGER_H

#include "IPlayer.h"
#include <vector>

class IGameManager
{
	public:
		virtual			~IGameManager() = 0;
		virtual void	Play() = 0;
	private:
		virtual void	getPlayers(IInput *in, IOutput *out, std::vector<IPlayer*> *players, int playerCount) = 0;
		virtual void	init(IInput *in, IOutput *out) = 0;
		virtual void	end(IPlayer *winner) = 0;
};

#endif