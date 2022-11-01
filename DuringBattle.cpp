#include "DuringBattle.h"

DuringBattle::DuringBattle(Battle* inC) : BattleState(inC){

}

DuringBattle::~DuringBattle(){
}

void DuringBattle::handle(){

}

void DuringBattle::changeState(){
	context->setState( new PostBattle() )
}