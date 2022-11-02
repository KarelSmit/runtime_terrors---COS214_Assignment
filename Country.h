#ifndef COUNTRY_H
#define COUNTRY_H
#include "Army.h"
#include "General.h"
#include <string>

class Country
{
public:
	Country(std::string, std::string);
	~Country();
	void setEnemy();
	void makeMove(int , Country*);
	Army* getArmy();
private:
	General *leader;
	Army *defenseForce;
	std::string cName;
};
#endif