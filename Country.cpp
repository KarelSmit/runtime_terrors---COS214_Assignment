#include "Country.h"

Country::Country( std::string cnme , std::string gName ){
	defenseForce = new Army();
	leader = new General(gName , defenseForce);
	cName = cnme;
}

Country::~Country(){
	delete defenseForce;
	delete leader;
}

void Country::setEnemy(){
	defenseForce->addInfantry(2);
	defenseForce->addTank(2);
	defenseForce->addMedic(2);
}

Army* Country::getArmy(){
	return defenseForce;
}

void Country::makeMove(int x ,Country* enemy){
	if ( x == 1 ){
		leader->setAttack();
	}else{
		leader->setDefend();
	}
	leader->battlePlan( enemy->getArmy() );
}