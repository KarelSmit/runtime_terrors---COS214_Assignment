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
		context->getA()->getArmy()->printStats();
		context->getB()->getArmy()->printStats();
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << "Choose your move for this round:\n1.Attack\n2.Defend\n->";
		int choice;
		std::cin >> choice;
		std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		if (choice == 1 || choice == 2)
		{
			switch (choice)
			{
			case 1:
				std::cout << context->getA()->getUsername() << " has chosen to attack.\n";
				break;
			case 2:
				std::cout << context->getA()->getUsername() << " has chosen to defend.\n";
				break;
			}
			context->getA()->makeMove(choice, context->getB());
		}
		else
		{
			std::cout << "\nInvalid input. Please select a valid strategy.\n";
			continue;
		}
		std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		int eMove = rand() % 2 + 1;
		switch (eMove)
		{
		case 1:
			std::cout << context->getB()->getUsername() << " has chosen to attack.\n";
			break;
		case 2:
			std::cout << context->getB()->getUsername() << " has chosen to defend.\n";
			break;
		}
		context->getB()->makeMove(eMove, context->getA());
		moves--;
		std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	}
	moves = context->getA()->getArmy()->getMoves();
	while (moves > 0)
	{
		context->getA()->getArmy()->printStats();
		context->getB()->getArmy()->printStats();
		// std::cout << "\n--------------------------------------------------------------------------------------------------\n";
		std::cout << "You have an extra move!\n";
		std::cout << "Choose your move for this round:\n1.Attack\n2.Defend\n->";
		int choice;
		std::cin >> choice;
		std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		if (choice == 1 || choice == 2)
		{
			switch (choice)
			{
			case 1:
				std::cout << context->getA()->getUsername() << " has chosen to attack.\n";
				break;
			case 2:
				std::cout << context->getA()->getUsername() << " has chosen to defend.\n";
				break;
			}
			context->getA()->makeMove(choice, context->getB());
		}
		else
		{
			std::cout << "\nInvalid input. Please select a valid strategy.\n";
			continue;
		}
		moves--;
		std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	}
	changeState();
}

void DuringBattle::changeState()
{
	context->setState(new PostBattle(context));
}