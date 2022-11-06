#include "Army.h"
#include "InfantryUnit.h"
#include "TankUnit.h"
#include "SupplyUnit.h"
#include "MedicUnit.h"
#include <iostream>
#include "asciiArt.h"

Army::Army()
{
	totalDmg = 0;
	totalHP = 0;
	extraMoves = 0;
	totalHeal = 0;
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

void Army::setEnemy()
{
	enemy = true;
}

void Army::setCommander(std::string nme)
{
	gName = nme;
}

void Army::addInfantry(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new InfantryUnit();
		n->next = atkForce;
		atkForce = n;
	}
	updateStats();
}

void Army::addTank(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new TankUnit();
		n->next = atkForce;
		atkForce = n;
	}
	updateStats();
}

void Army::addMedic(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new MedicUnit();
		n->next = medicForce;
		medicForce = n;
	}
	updateStats();
}

void Army::addSupply(int x)
{
	for (int i = 0; i < x; i++)
	{
		Battalion *n = new SupplyUnit();
		n->next = supplyChain;
		supplyChain = n;
	}
	updateStats();
}

void Army::updateStats()
{
	totalDmg = 0;
	totalHP = 0;
	extraMoves = 0;
	totalHeal = 0;
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
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has lost an attack battalion.";
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
		else
		{
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has taken " << x << " damage to an attack battalion.";
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
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
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has lost a medic battalion.";
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
		else
		{
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has taken " << x << " damage to a medic battalion.";
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
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
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has lost a supply battalion.";
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
		else
		{
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has taken " << x << " damage to a supply battalion.";
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
	}
	else
	{
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << "'s army is already defeated.";
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
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
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << " has healed an attack battalion for " << totalHeal << "HP.";
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	else if (medicForce != nullptr)
	{
		n = medicForce;
		n->heal(totalHeal);
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << " has healed a medic battalion for " << totalHeal << "HP.";
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	else if (supplyChain != nullptr)
	{
		n = supplyChain;
		n->heal(totalHeal);
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << " has healed a supply battalion for " << totalHeal << "HP.";
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	else
	{
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << "'s army is already defeated.";
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
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
		medicForce = n;
	}
	n = supplyChain;
	while (n != nullptr)
	{
		Battalion *temp = n;
		n = n->next;
		delete temp;
		supplyChain = n;
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

void Army::printStats()
{
	asciiArt aA;
	// std::cout << "\n..............................................................................\n";
	std::cout << gName << "'s army is in the current state:\n";
	std::cout << "HP = " << totalHP;
	aA.printBar(totalHP);
	std::cout << "Damage = " << totalDmg;
	aA.printBar(totalDmg);
	std::cout << "RP = " << totalHeal << " ";
	aA.printBar(totalHeal);
	std::cout << "ExtraMoves = " << extraMoves << "\n";
	std::cout << "..............................................................................\n";
}