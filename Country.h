#ifndef COUNTRY_H
#define COUNTRY_H
#include "Army.h"
#include <string>

class Country
{
public:
	Country( std::string );
	Country( std::string , std::string );
	~Country();
private:
	Army* defenseForce;
	std::string cName;
};
#endif