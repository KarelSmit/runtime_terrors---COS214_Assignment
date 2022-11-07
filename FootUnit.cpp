
#include "FootUnit.h"
FootUnit::FootUnit(int HP)
{
	this->HP = HP;
}

FootUnit::~FootUnit()
{
}

int FootUnit::getHP()
{
	return this->HP;
}

int FootUnit::getDamage()
{
	return 0;
}

int FootUnit::getrejuvenationPower()
{
	return 0;
}