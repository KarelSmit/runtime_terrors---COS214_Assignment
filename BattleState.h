#ifndef BATTLESTATE_H
#define BATTLESTATE_H
#include "Battle.h"

class BattleState
{
public:
	BattleState( Battle* );
	~BattleState();
	virtual void handle() = 0;
	virtual void changeState(){};

protected:
	Battle* context;
};
#endif