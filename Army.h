#ifndef ARMY_H
#define ARMY_H
#include "General.h"

class Army
{
public:
	Army();
	~Army();
	void addInfantry();
	void addTank();
	void addMedic();
	void addSupply();
	void updateStats();
private:
	//Battalion* head;
	int totalDmg;
	int totalHP;
	int extraMoves;
};
#endif