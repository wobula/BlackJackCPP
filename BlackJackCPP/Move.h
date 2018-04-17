#pragma once

#ifndef MOVE_H
#define MOVE_H

#include "IMove.h"
class Move : public IMove
{
	public:
		Move();
		~Move();
		enum playerMove	action;
};

enum playerMove
{
	Hit,
	Stand,
	Last
};

#endif