#ifndef GENERAL_H
#define GENERAL_H
#include <string>
#include "Attack.h"
#include "Defend.h"

class General
{
public:
	General( std::string , Army*);
	~General();
	void setAttack();
	void setDefend();
	void battlePlan(Army*);
	std::string getName();
private:
	std::string name;
	Army* myArmy;
	Strategy* plan;
};

#endif
