#pragma once

#ifndef IGAMEMANAGER_H
#define IGAMEMANAGER_H

#include "IPlayer.h"
#include "IInput.h"
#include "IOutput.h"
#include <vector>

class IGameManager
{
	public:
		std::vector<IPlayer*>	*players;

		virtual					~IGameManager() = 0;
		virtual void			Play() = 0;
		virtual int				GatherPlayerTurnChoice(IInput *in, IOutput *out) = 0;
		virtual bool			HandlePlayerTurn(IInput *in, IOutput *out, IPlayer *player) = 0;
	private:
		virtual void			init(IInput *in, IOutput *out) = 0;
		virtual void			end(IPlayer *winner) = 0;
		
		int						currentMoveIndex;
};

#endif