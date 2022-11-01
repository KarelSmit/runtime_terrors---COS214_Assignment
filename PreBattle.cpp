#include "PreBattle.h"
#include "DuringBattle.h"

PreBattle::PreBattle(Battle* inC) : BattleState(inC){

}

PreBattle::~PreBattle(){
}

void PreBattle::handle(){
	context->getB()->setEnemy();
	int totalBattalion = 0;
	std::cout << "Your army will consist of " << totalBattalion << " battalions.\n";
	std::cout << "You have have a choice between Infantry, Tank, Medic and Supply battalions to create your army.\n";
	while (totalBattalion < 6)
	{
		std::cout << "Select battalion number " << totalBattalion + 1 << " for your army.\n";
		std::cout << "1. Infantry\n2. Tank\n3. Medic\n4. Supply\n->";
		int choice;
		std::cin>>choice;
		switch (choice)
		{
		case 1:
			context->getA()->getArmy()->addInfantry(1);
			break;
		case 2:
			context->getA()->getArmy()->addTank(1);
			break;
		case 3:
			context->getA()->getArmy()->addMedic(1);
			break;
		case 4:
			context->getA()->getArmy()->addSupply(1);
			break;
		default:
			std::cout << "\n\nInvalid input. Please select one of the given battalion types.\n\n";
			break;
		}
		totalBattalion++;
	}
	changeState();
}

void PreBattle::changeState(){
	context->setState( new DuringBattle(context) );
}