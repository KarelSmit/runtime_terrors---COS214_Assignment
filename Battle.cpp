#include "Battle.h"
#include "BattleState.cpp"
#include "PreBattle.cpp"
#include "DuringBattle.cpp"
#include "PostBattle.cpp"

Battle::Battle(Country* sA, Country* sB){
	sideA = sA;
	sideB = sB;
	state = new PreBattle( this );
}

Battle::~Battle(){
	delete state;
	sideA->getArmy()->reset();
	sideB->getArmy()->reset();
}

void Battle::begin(){
	state->handle();
}

void Battle::setState( BattleState* next ){
	delete state;
	state = next;
	state->handle();
}

Country* Battle::getA(){
	return sideA;
}

Country* Battle::getB(){
	return sideB;
}
