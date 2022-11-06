#include "PostBattle.h"

PostBattle::PostBattle(Battle* inC) : BattleState(inC){

}

PostBattle::~PostBattle(){
}

void PostBattle::handle(){
	cout << "================================================================================================\n";
	cout << "This is the Post Battle state of both sides:\n";
	context->getA()->getArmy()->printStats();
	context->getB()->getArmy()->printStats();
	int myHP = context->getA()->getArmy()->getHP();
	int enemyHP = context->getB()->getArmy()->getHP();
	if ( myHP >= enemyHP ){
		context->winner = true;
	}else{
		context->winner = false;
	}
	context->getA()->getArmy()->reset();
	context->getB()->getArmy()->reset();
}