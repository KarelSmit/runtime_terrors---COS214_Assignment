#include "PostBattle.h"

PostBattle::PostBattle(Battle* inC) : BattleState(inC){

}

PostBattle::~PostBattle(){
}

void PostBattle::handle(){
	int myHP = context->getA()->getArmy()->getHP();
	int enemyHP = context->getB()->getArmy()->getHP();
	if ( myHP >= enemyHP ){
		context->winner = true;
	}else{
		context->winner = false;
	}
}