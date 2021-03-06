#pragma once

#ifndef  GAMEMANAGER_H
#define	 GAMEMANAGER_H

#include "Render.h"
#include "IOutput.h"
#include "IInput.h"
#include "IGameManager.h"
#include "IRender.h"
#include "Output.h"
#include "Player.h"


class GameManager : public IGameManager
{
	public:
		IOutput					*Out;
		IInput					*In;
		std::vector<IPlayer*>	*players;
		IRender					*Draw;

								GameManager();
								~GameManager();
		void					Play();
		int						GatherPlayerTurnChoice(IInput *in, IOutput *out);
		bool					HandlePlayerTurn(IInput *in, IOutput *out, IPlayer *player);

	private:
		int						currentMoveIndex;
		int						playerCount;
		int						getPlayerCount(IInput *in, IOutput *out);
		std::vector<IPlayer*>*	makePlayers(IInput *in, IOutput *out, int playerCount);
		void					deletePlayers(std::vector<IPlayer*> *players);
		void					init(IInput *in, IOutput *out);
		void					end(IPlayer *winner);
};

#endif