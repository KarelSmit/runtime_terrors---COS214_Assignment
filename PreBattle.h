#ifndef PREBATTLE_H
#define PREBATTLE_H
#include "BattleState.h"

class PreBattle : public BattleState
{
public:
	PreBattle( Battle* );
	~PreBattle();
	void handle();
	void changeState();
};

#endif