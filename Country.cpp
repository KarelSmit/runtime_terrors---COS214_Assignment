#include "Country.h"

Country::Country(){
	defenseForce = new Army();
}

Country::~Country(){
	delete defenseForce;
}