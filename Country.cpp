#include "Country.h"

Country::Country( std::string cnme , std::string gName ){
	defenseForce = new Army();
	leader = new General(gName);
	cName = cnme;
}

Country::~Country(){
	delete defenseForce;
	delete leader;
}