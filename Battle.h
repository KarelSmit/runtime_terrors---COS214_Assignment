#ifndef BATTLE_H
#define BATTLE_H
#include "Country.h"

class Battle
{
public:
	Battle(Country*,Country*);
	~Battle();

private:
 Country* sideA;
 Country* sideB;
};

#endif
