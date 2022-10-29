#include "Country.h"

Country::Country( std::string cnme ){
	defenseForce = new Army();
	cName = cnme;
}

Country::Country( std::string cnme , std::string gName ){
	defenseForce = new Army( gName );
	cName = cnme;
}

Country::~Country(){
	delete defenseForce;
}