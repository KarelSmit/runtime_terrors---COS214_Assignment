#include "PreBattle.h"

PreBattle::PreBattle(Battle* inC) : BattleState(inC){

}

PreBattle::~PreBattle(){
}

void PreBattle::handle(){

}

void PreBattle::changeState(){
	context->setState( new DuringBattle() )
}