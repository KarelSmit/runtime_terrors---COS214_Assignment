#include "General.h"
#include <iostream>

General::General(std::string nme, Army *myA)
{
	name = nme;
	myArmy = myA;
}

General::~General() {}

void General::battlePlan(Army *enemy)
{
	plan->battlePlan(myArmy, enemy);
}

void General::setAttack()
{
	delete plan;
	plan = new Attack();
}

void General::setDefend()
{
	delete plan;
	plan = new Defend();
}

std::string General::getName()
{
	return name;
}