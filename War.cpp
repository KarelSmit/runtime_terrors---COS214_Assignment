#include "War.h"
#include "Battle.cpp"
#include "Records.h"
#include <string>
#include <iostream>

War *War::warInstance = new War();

War *War::startWar()
{
	if (warInstance == 0)
	{
		warInstance = new War();
	}
	return warInstance;
}

War::War()
{
	winner = false;
	score = 0;
	battleHistory = nullptr;
	sideA = nullptr;
	sideB = nullptr;
}

War::~War()
{
	delete warInstance;
	delete sideA;
	delete sideB;
	delete battleHistory;
}

void War::simulate()
{
	if (sideA != nullptr)
	{
		delete sideA;
	}
	if (sideB != nullptr)
	{
		delete sideB;
	}
	if (battleHistory != nullptr)
	{
		delete battleHistory;
	}
	score = 0;
	winner = false;
	battleHistory = new bool[3];
	string uName;
	std::cout << "\nEnter your name below\n->";
	cin.ignore(1,'\n');
	getline(cin, uName);
	// std::cin >> uName;
	user = new User(uName, 0);
	sideA = new Country("General " + uName);
	sideB = new Country("Evil General");
	for (int i = 0; i < 3; i++)
	{
		Battle *bat = new Battle(sideA, sideB);
		bat->begin();
		battleHistory[i] = bat->winner;
		if (battleHistory[i])
		{
			score += bat->getA()->getArmy()->getHP();
		}
		delete bat;
	}
	user->setUserScore(score);
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (battleHistory[i])
		{
			count++;
		}
	}
	if (count >= 2)
	{
		cout << "================================================================================================\n";
		std::cout << "\nYou have won the war! Congratulations " << sideA->getUsername() << "!\n Your final score was " << score << ".\n";
		cout << "================================================================================================\n";
	}
	else
	{
		cout << "================================================================================================\n";
		std::cout << "\nYou have lost the war. Better luck next time " << sideA->getUsername() << ".\nYour final score was " << score << ".\n";
		cout << "================================================================================================\n";
	}
}

void War::setScore(int s)
{
	user->setUserScore(s);
}

IntelDivision *War::Save()
{
	return new IntelDivision(this->user);
}

void War::Restore(IntelDivision *memento)
{
	this->user = memento->getUser();
}