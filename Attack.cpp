#include "Attack.h"

Attack::Attack(){

}

Attack::~Attack(){

}

void Attack::battlePlan( Army* attacker, Army* victim){
	victim->takeDamage( attacker->getDamage() );
}