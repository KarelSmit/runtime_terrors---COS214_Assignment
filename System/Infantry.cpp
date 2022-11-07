
#include "Infantry.h"
#include "SpecialSkill.h"
#include <cstdlib>
Infantry::Infantry(int HP, int Damage) : FootUnit(HP)
{
	this->Damage = Damage;
	srand(1232);
	int random = (rand() % 10) + 1;
	if (random == 2)
	{
		SpecialSkill *skill = new SpecialSkill(this, 2);
		skill->addSkill();
		delete skill;
	}
	else if (random == 1)
	{
		SpecialSkill *skill = new SpecialSkill(this, 1);
		skill->addSkill();
		delete skill;
	}
}

Infantry::~Infantry()
{
}

int Infantry::getDamage()
{
	return this->Damage;
}

void Infantry::setDamage(int damage)
{
	this->Damage = damage;
}

void Infantry::setHP(int HP)
{
	this->HP = HP;
}