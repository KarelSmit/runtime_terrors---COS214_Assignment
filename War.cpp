#include "War.h"
#include "Battle.cpp"
#include <string>
#include <iostream>

War* War::warInstance = new War();

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
	battleHistory = new bool[3];
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
	std::string uName;
	std::cout << "Enter your name:";
	std::cin >> uName;
	sideA = new Country("CountryA",uName);
	sideB = new Country("CountryB","Enemy General");
	for (int i = 0; i < 3; i++)
	{
		Battle* bat = new Battle( sideA,sideB );
		bat->begin();
		battleHistory[i] = bat->winner;
		if ( battleHistory[i] ){
			score += bat->getA()->getArmy()->getHP();
		}
		delete bat;
	}
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if ( battleHistory[i] ){
			count++;
		}
	}
	if ( count >= 2 ){
		std::cout << "\n\nYou have won the war. Congratulations General.\n\n";
		//Store in memento
	}else{
		std::cout << "\n\nYou have lost the war. Better luck next time General.\n\n";
	}
	
}