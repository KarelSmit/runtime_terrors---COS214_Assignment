#ifndef ARMY_H
#define ARMY_H
#include "Battalion.h"

class Army
{
public:
	Army();
	~Army();
	void addInfantry(int);
	void addTank(int);
	void addMedic(int);
	void addSupply(int);
	void updateStats();
	int getDamage();
	void takeDamage(int);
	void heal();
	void reset();

private:
	Battalion* atkForce;
	Battalion* medicForce;
	Battalion* supplyChain;
	int totalDmg;
	int totalHP;
	int extraMoves;
	int totalHeal;
};
#endif