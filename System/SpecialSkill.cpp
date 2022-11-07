#include "SpecialSkill.h"
#include "Sniper.h"
#include "Stealth.h"
SpecialSkill::SpecialSkill(Infantry *soldier, int choice)
{
	this->soldier = soldier;
	this->choice = choice;
}

void SpecialSkill::addSkill()
{
	if (choice == 1)
	{
		Sniper *decorator = new Sniper(soldier);
		delete decorator;
	}
	else if (choice == 2)
	{
		Stealth *decorator = new Stealth(soldier);
		delete decorator;
	}
}

SpecialSkill::~SpecialSkill()
{
}