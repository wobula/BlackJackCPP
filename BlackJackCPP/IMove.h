#pragma once

#ifndef IMOVE_H
#define IMOVE_H

class IMove
{
	public:
		virtual ~IMove();
		enum playerMove action;
};

#endif