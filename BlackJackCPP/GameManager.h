#pragma once

#ifndef  GAMEMANAGER_H
#define	 GAMEMANAGER_H

#include "IOutput.h"
#include "IInput.h"
#include "IGameManager.h"

class GameManager : public IGameManager
{
	public:
		IOutput *Out;
		IInput	*In;
		GameManager();
		~GameManager();
		void	Play(std::vector<IPlayer*> *players);
	private:
		int		playerCount;
		void	init(IInput *in, IOutput *out);
		void	end(IPlayer *winner);
};

#endif


/*
public:
virtual			~IGameManager() = 0;
virtual void	Play(std::vector<IPlayer*> *players) = 0;
private:
virtual void	Init(void) = 0;
virtual void	End(IPlayer *winner) = 0;
*/