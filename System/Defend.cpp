#include "Defend.h"

Defend::Defend() {}

Defend::~Defend() {}

void Defend::battlePlan(Army *defender, Army *attacker)
{
	defender->heal();
}