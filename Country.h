#ifndef COUNTRY_H
#define COUNTRY_H
#include "Army.h"

class Country
{
public:
	Country();
	~Country();
private:
	Army* defenseForce;
};
#endif