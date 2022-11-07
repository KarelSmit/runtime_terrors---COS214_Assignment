#include "PostBattle.h"
#include <iostream>

PostBattle::PostBattle(Battle *inC) : BattleState(inC)
{
}

PostBattle::~PostBattle()
{
}

void PostBattle::handle()
{
	// std::cout << "================================================================================================\n";
	std::cout << "This is the Post Battle state of both sides:\n";
	context->getA()->getArmy()->printStats();
	// std::cout << "================================================================================================\n";
	// std::cout << "------------------------------------------------------------------------------------------------\n";

	context->getB()->getArmy()->printStats();
	int myHP = context->getA()->getArmy()->getHP();
	int enemyHP = context->getB()->getArmy()->getHP();
	if (myHP >= enemyHP)
	{
		context->winner = true;
	}
	else
	{
		context->winner = false;
	}
	context->getA()->getArmy()->reset();
	context->getB()->getArmy()->reset();
}