#include "DuringBattle.h"
#include "PostBattle.h"
#include <time.h>

DuringBattle::DuringBattle(Battle* inC) : BattleState(inC){

}

DuringBattle::~DuringBattle(){
}

void DuringBattle::handle(){
	int moves = 5;
	
	std::cout << "Battle Simulation:"; //Choose better output message
	srand( (unsigned)time(NULL));
	while( moves > 0 )
	{
		std::cout << "Choose your move:\n1.Attack\n2.Defend\n->";
		int choice;
		std::cin >> choice;
		if ( choice == 1 || choice == 2 ){
			context->getA()->makeMove(choice,context->getB());
		}else{
			std::cout << "\n\nInvalid input. Please select a valid strategy.\n\n";
			continue;
		}
		int enemy = rand()%2 + 1;
		context->getB()->makeMove(enemy,context->getA());
		moves--;
	}
	

	changeState();
}

void DuringBattle::changeState(){
	context->setState( new PostBattle(context) );
}