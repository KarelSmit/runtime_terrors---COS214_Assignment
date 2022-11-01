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
	state->changeState();
	state->handle();
	state->changeState();
	state->handle();
}

void Battle::setState( BattleState* next ){
	delete state;
	state = next;
}