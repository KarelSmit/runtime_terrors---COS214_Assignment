#include "Army.h"
#include "InfantryUnit.h"
#include "TankUnit.h"
#include "SupplyUnit.h"
#include "MedicUnit.h"
#include <iostream>
#include "asciiArt.h"
#include "colormod.h"

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

	Color::Modifier red(Color::FG_RED);
	Color::Modifier green(Color::FG_GREEN);
	Color::Modifier blue(Color::FG_BLUE);
	Color::Modifier yellow(Color::FG_YELLOW);
	Color::Modifier def(Color::FG_DEFAULT);
	Color::Modifier inverse_on(Color::FG_INVERSE_ON);
	Color::Modifier inverse_off(Color::FG_INVERSE_OFF);

	if (atkForce != nullptr)
	{
		n = atkForce;
		std::cout << "\t\t";
		if (n->takeDamage(x))
		{
			Battalion *temp = n;
			n = n->next;
			delete temp;
			atkForce = n;
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has " << red << "lost an " << inverse_on << "attack" << inverse_off << " battalion." << def;
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
		else
		{
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has " << red << "taken " << x << " damage to an " << inverse_on << "attack" << inverse_off << " battalion." << def;
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
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
			std::cout << gName << " has " << red << "lost a " << inverse_on << "medic" << inverse_off << " battalion." << def;
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
		else
		{
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has " << red << "taken " << x << " damage to a " << inverse_on << "medic" << inverse_off << " battalion." << def;
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
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
			std::cout << gName << " has " << red << "lost a " << inverse_on << "supply" << inverse_off << " battalion." << def;
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
		else
		{
			// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			std::cout << gName << " has " << red << "taken " << x << " damage to a " << inverse_on << "supply" << inverse_off << " battalion." << def;
			std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		}
	}
	else
	{
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << "'s army is already " << red << "defeated." << def;
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	updateStats();
}

void Army::heal()
{
	Battalion *n;

	Color::Modifier red(Color::FG_RED);
	Color::Modifier green(Color::FG_GREEN);
	Color::Modifier blue(Color::FG_BLUE);
	Color::Modifier yellow(Color::FG_YELLOW);
	Color::Modifier def(Color::FG_DEFAULT);
	Color::Modifier inverse_on(Color::FG_INVERSE_ON);
	Color::Modifier inverse_off(Color::FG_INVERSE_OFF);
	std::cout << "\t\t";
	if (atkForce != nullptr)
	{
		n = atkForce;
		n->heal(totalHeal);
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << " has " << green << "healed an " << inverse_on << "attack" << inverse_off << " battalion for " << totalHeal << "HP." << def;
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	else if (medicForce != nullptr)
	{
		n = medicForce;
		n->heal(totalHeal);
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << " has " << green << "healed a " << inverse_on << "medic" << inverse_off << " battalion for " << totalHeal << "HP." << def;
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	else if (supplyChain != nullptr)
	{
		n = supplyChain;
		n->heal(totalHeal);
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << " has" << green << "healed a " << inverse_on << "supply" << inverse_off << " battalion for " << totalHeal << "HP." << def;
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
	else
	{
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << gName << "'s army is already " << red << "defeated." << def;
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
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
	Color::Modifier yellow(Color::FG_YELLOW);
	Color::Modifier def(Color::FG_DEFAULT);
	// std::cout << "\n..............................................................................\n";
	// std::cout << "\n\n================================================================================================\n";

	std::cout << yellow << gName << "'s " << def << "army is in the current state:\n";
	std::cout << "\t\t"
			  << "HP = " << totalHP;
	aA.printBar(totalHP, 'H');
	std::cout << "\t\t"
			  << "Damage = " << totalDmg;
	aA.printBar(totalDmg, 'D');
	std::cout << "\t\t"
			  << "RP = " << totalHeal << " ";
	aA.printBar(totalHeal, 'R');
	std::cout << "\t\t"
			  << "ExtraMoves = " << extraMoves;
	aA.printBar(extraMoves, 'S');
	// std::cout << "..............................................................................\n";
	// std::cout << "\n================================================================================================\n";
	std::cout << "\n------------------------------------------------------------------------------------------------\n";
}