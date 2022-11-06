#ifndef WAR_H
#define WAR_H
#include "IntelDivision.h"
#include "User.h"
#include "Country.h"
#include <iostream>
using namespace std;

///This is the class where all the design patterns act together to simulate the war.
///
///This class acts as the Originator participant in the Memento design pattern
class War
{
private:
    User *user;
    static War *warInstance;
	bool winner;
	int score;
	Country* sideA;
	Country* sideB;
	bool* battleHistory;
protected:
    War();
    ~War();

public:
    static War* startWar();
    void simulate();
    void setScore(int s);
    IntelDivision *Save();
    void Restore(IntelDivision *memento);
};
#endif