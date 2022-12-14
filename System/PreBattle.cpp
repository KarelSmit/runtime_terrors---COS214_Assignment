#include "PreBattle.h"
#include "DuringBattle.h"

PreBattle::PreBattle(Battle *inC) : BattleState(inC)
{
}

PreBattle::~PreBattle()
{
}

void PreBattle::handle()
{
	context->getB()->setEnemy();
	int totalBattalion = 6;
	std::cout << "================================================================================================\n";
	std::cout << "Your army will consist of " << totalBattalion << " battalions.\n\n";
	std::cout << "Choose one of the combinations below:\n\n";
	bool accept = false;
	while (!accept)
	{
		std::cout << "1. 2x Infantry, 2x Tank, 2x Medic\n2. 2x Infantry, 2x Tank, 1x Medic, 1x Supply\n";
		std::cout << "3. 1x Infantry, 2x Tank, 2x Medic, 1x Supply\n4. 2x Infantry, 1x Tank, 2x Medic, 1x Supply\n";
		std::cout << "5. 1x Infantry, 1x Tank, 2x Medic, 2x Supply\n->";
		std::string input;
		std::cin >> input;
		if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5")
		{
			int choice = std::stoi(input);
			switch (choice)
			{
			case 1:
				context->getA()->getArmy()->addTank(2);
				context->getA()->getArmy()->addInfantry(2);
				context->getA()->getArmy()->addMedic(2);
				accept = true;
				break;
			case 2:
				context->getA()->getArmy()->addTank(2);
				context->getA()->getArmy()->addInfantry(2);
				context->getA()->getArmy()->addMedic(1);
				context->getA()->getArmy()->addSupply(1);
				accept = true;
				break;
			case 3:
				context->getA()->getArmy()->addTank(2);
				context->getA()->getArmy()->addInfantry(1);
				context->getA()->getArmy()->addMedic(2);
				context->getA()->getArmy()->addSupply(1);
				accept = true;
				break;
			case 4:
				context->getA()->getArmy()->addTank(1);
				context->getA()->getArmy()->addInfantry(2);
				context->getA()->getArmy()->addMedic(2);
				context->getA()->getArmy()->addSupply(1);
				accept = true;
				break;
			case 5:
				context->getA()->getArmy()->addTank(1);
				context->getA()->getArmy()->addInfantry(1);
				context->getA()->getArmy()->addMedic(2);
				context->getA()->getArmy()->addSupply(2);
				accept = true;
				break;
			}
		}
		else
		{
			std::cout << "================================================================================================\n";
			std::cout << "\nInvalid input. Please select one of the given battalion types.\n\n";
			std::cout << "================================================================================================\n";
			accept = false;
		}
	}
	changeState();
}

void PreBattle::changeState()
{
	context->setState(new DuringBattle(context));
}