#include "War.h"
#include "Battle.cpp"
#include <string>
#include <iostream>
using namespace std;

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
	string uName;
	cout << "Enter your name:";
	cin >> uName;

	user = new User(uName, 0);

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
	user->setScore(score);
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if ( battleHistory[i] ){
			count++;
		}
	}
	if ( count >= 2 ){
		cout << "\n\nYou have won the war. Congratulations General.\n\n";
		//Store in memento
	}else{
		cout << "\n\nYou have lost the war. Better luck next time General.\n\n";
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