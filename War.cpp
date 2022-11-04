#include "War.h"
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
	battleHistory = new int[5];
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
		
	}
}