#ifndef DURINGBATTLE_H
#define DURINGBATTLE_H
#include "BattleState.h"

class DuringBattle : public BattleState
{
public:
	DuringBattle( Battle* );
	~DuringBattle();
	void handle();
	void changeState();
};



#endif