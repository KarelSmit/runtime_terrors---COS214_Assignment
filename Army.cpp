#include "Army.h"
#include "InfantryUnit.h"
#include "TankUnit.h"
#include "SupplyUnit.h"
#include "MedicUnit.h"
#include <iostream>

Army::Army()
{
	totalDmg = 0;
	totalHP - 0;
	extraMoves = 0;
	atkForce = nullptr;
	medicForce = nullptr;
	supplyChain = nullptr;
	enemy = false;
}

Army::~Army()
{
	Battalion *n = atkForce;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		atkForce = n;
	}
	n = medicForce;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		atkForce = n;
	}
	n = supplyChain;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		atkForce = n;
	}
}

void Army::setEnemy(){
	enemy = true;
}

void Army::addInfantry(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new InfantryUnit();
		n->next = atkForce;
		atkForce = n;
	}
}

void Army::addTank(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new TankUnit();
		n->next = atkForce;
		atkForce = n;
	}
}

void Army::addMedic(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new MedicUnit();
		n->next = medicForce;
		medicForce = n;
	}
}

void Army::addSupply(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new SupplyUnit();
		n->next = supplyChain;
		supplyChain = n;
	}
}

void Army::updateStats()
{
	Battalion *n = atkForce;
	while (n != nullptr)
	{
		totalDmg += n->getDmg();
		totalHP += n->getHP();
		n = n->next;
	}

	n = medicForce;
	while (n != nullptr)
	{
		totalHeal += n->getRP();
		totalHP += n->getHP();
		n = n->next;
	}
	int em = 0;
	n = supplyChain;
	while (n != nullptr)
	{
		em++;
		totalHP += n->getHP();
		n = n->next;
	}
	extraMoves = em;
}

int Army::getDamage()
{
	return totalDmg;
}

void Army::takeDamage(int x)
{
	Battalion *n;
	if (atkForce != nullptr)
	{
		n = atkForce;
		if (n->takeDamage(x))
		{
			Battalion *temp = n;
			n = n->next;
			delete temp;
			atkForce = n;
		}
		std::cout << "Attack battalion has been killed.\n";
	}
	else if (medicForce != nullptr)
	{
		n = medicForce;
		if (n->takeDamage(x))
		{
			Battalion *temp = n;
			n = n->next;
			delete temp;
			medicForce = n;
		}
		std::cout << "Medic battalion has been killed.\n";
	}
	else if (supplyChain != nullptr)
	{
		n = supplyChain;
		if (n->takeDamage(x))
		{
			Battalion *temp = n;
			n = n->next;
			delete temp;
			supplyChain = n;
		}
		std::cout << "Supply battalion has been killed.\n";
	}
	else
	{
		std::cout << "Your army has been defeated.\n";
	}
	updateStats();
}

void Army::heal()
{
	Battalion *n;
	if (atkForce != nullptr)
	{
		n = atkForce;
		n->heal(totalHeal);
		std::cout << "Attack battalion has been healed.\n";
	}
	else if (medicForce != nullptr)
	{
		n = atkForce;
		n->heal(totalHeal);
		std::cout << "Medic battalion has been healed.\n";
	}
	else if (supplyChain != nullptr)
	{
		n = atkForce;
		n->heal(totalHeal);
		std::cout << "Supply battalion has been healed.\n";
	}
	else
	{
		std::cout << "Your army has already been defeated.\n";
	}
	updateStats();
}

void Army::reset()
{
	totalDmg = 0;
	totalHP - 0;
	extraMoves = 0;
	Battalion *n = atkForce;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		atkForce = n;
	}
	n = medicForce;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		atkForce = n;
	}
	n = supplyChain;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		atkForce = n;
	}
	atkForce = nullptr;
	medicForce = nullptr;
	supplyChain = nullptr;
}

int Army::getMoves()
{
	return extraMoves;
}

int Army::getHP()
{
	return totalHP;
}