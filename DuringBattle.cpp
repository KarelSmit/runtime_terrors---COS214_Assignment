#include "DuringBattle.h"
#include "PostBattle.h"
#include <time.h>

DuringBattle::DuringBattle(Battle *inC) : BattleState(inC)
{
}

DuringBattle::~DuringBattle()
{
}

void DuringBattle::handle()
{
	int moves = 5;
	cout << "================================================================================================\n";
	std::cout << "Prepare for battle!\nYou have " << moves << " oppotunities to attack or defend.\nPlan your strategy wisely. If you sustain too much damage, you might lose your battalions!\n\n";
	cout << "================================================================================================\n";
	srand((unsigned)time(NULL));
	while (moves > 0)
	{
		std::cout << "Choose your move:\n1.Attack\n2.Defend\n->";
		int choice;
		std::cin >> choice;
		if (choice == 1 || choice == 2)
		{
			context->getA()->makeMove(choice, context->getB());
		}
		else
		{
			std::cout << "\n\nInvalid input. Please select a valid strategy.\n\n";
			continue;
		}
		int enemy = rand() % 2 + 1;
		context->getB()->makeMove(enemy, context->getA());
		moves--;
	}
	moves = context->getA()->getArmy()->getMoves();
	while (moves > 0)
	{
		std::cout << "You have an extra move!\n";
		std::cout << "Choose your move:\n1.Attack\n2.Defend\n->";
		int choice;
		std::cin >> choice;
		if (choice == 1 || choice == 2)
		{
			context->getA()->makeMove(choice, context->getB());
		}
		else
		{
			std::cout << "\n\nInvalid input. Please select a valid strategy.\n\n";
			continue;
		}
		moves--;
	}
	changeState();
}

void DuringBattle::changeState()
{
	context->setState(new PostBattle(context));
}