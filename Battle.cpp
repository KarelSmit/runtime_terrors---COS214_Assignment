#include "Battle.h"

Battle::Battle(Country* sA, Country* sB){
	sideA = sA;
	sideB = sB;
	state = new PreBattle( this );
}

Battle::~Battle(){

}

void Battle::begin(){
	state->handle();
}

void Battle::setState( BattleState* next ){
	delete state;
	state = next;
}

Country* Battle::getA(){
	return sideA;
}

Country* Battle::getB(){
	return sideB;
}