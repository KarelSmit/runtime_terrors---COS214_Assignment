#ifndef ARMY_H
#define ARMY_H
#include "Battalion.h"
#include <string>

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
	int getMoves();
	int getHP();
	void setEnemy();
	void setCommander( std::string );

private:
	Battalion* atkForce;
	Battalion* medicForce;
	Battalion* supplyChain;
	int totalDmg;
	int totalHP;
	int extraMoves;
	int totalHeal;
	bool enemy;
	std::string gName;
};
#endif