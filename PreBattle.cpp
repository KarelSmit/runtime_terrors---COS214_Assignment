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
	int totalBattalion = 0;
	std::cout << "Your army will consist of " << totalBattalion << " battalions.\n";
	std::cout << "You have have a choice between Infantry, Tank, Medic and Supply battalions to create your army.\n";
	std::cout << "1. 2x Infantry , 2x Tank, 2x Medic\n2. 2x Infantry, 2x Tank, 1x Medic, 1x Supply\n3. 1x Infantry, 2x Tank, 2x Medic, 1x Supply\n4. 2x Infantry, 1x Tank, 2x Medic, 1x Supply\n";
	std::cout << "5. 1x Infantry, 1x Tank, 2x Medic, 2x Supply\n->";
	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		context->getA()->getArmy()->addInfantry(1);
		context->getA()->getArmy()->addTank(1);
		context->getA()->getArmy()->addMedic(1);
		//context->getA()->getArmy()->addSupply(1);
		break;
	case 2:
		context->getA()->getArmy()->addInfantry(1);
		context->getA()->getArmy()->addTank(1);
		context->getA()->getArmy()->addMedic(1);
		context->getA()->getArmy()->addSupply(1);
		break;
	case 3:
		context->getA()->getArmy()->addInfantry(1);
		context->getA()->getArmy()->addTank(1);
		context->getA()->getArmy()->addMedic(1);
		context->getA()->getArmy()->addSupply(1);
		break;
	case 4:
		context->getA()->getArmy()->addInfantry(1);
		context->getA()->getArmy()->addTank(1);
		context->getA()->getArmy()->addMedic(1);
		context->getA()->getArmy()->addSupply(1);
		break;
	case 5:
		context->getA()->getArmy()->addInfantry(1);
		context->getA()->getArmy()->addTank(1);
		context->getA()->getArmy()->addMedic(1);
		context->getA()->getArmy()->addSupply(1);
		break;
	default:
		std::cout << "\n\nInvalid input. Please select one of the given battalion types.\n\n";
		break;
	}
	totalBattalion++;
	changeState();
}

void PreBattle::changeState()
{
	context->setState(new DuringBattle(context));
}