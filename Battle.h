#ifndef BATTLE_H
#define BATTLE_H
#include "Country.h"
#include "PreBattle.h"

class Battle
{
public:
	Battle(Country *, Country *);
	~Battle();
	void begin();
	void setState(BattleState*);
	Country* getA();
	Country* getB();
	bool winner;

private:
	Country *sideA;
	Country *sideB;
	BattleState* state;
};
#endif
