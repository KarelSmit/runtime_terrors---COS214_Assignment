#include "War.h"

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
	warInstance = 0;
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
	sideA = new Country("SideA");
	sideB = new Country("SideB","General Bad");
	for (int i = 0; i < 5; i++)
	{
	}
}