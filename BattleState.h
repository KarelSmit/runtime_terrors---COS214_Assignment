/**
 * @file BattleState.h
 * @author Karel Smit
 * @brief Abstract interface class for PreBattle, DuringBattle and PostBattle
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef BATTLESTATE_H
#define BATTLESTATE_H
#include "Battle.h"
#include <iostream>

/**
 * @brief Specifies the abstract interface for PreBattle, DuringBattle and PostBattle
 *
 * @class BattleState
 * Interface class
 *
 */

class Battle;

class BattleState
{
public:
	/**
	 * @brief Construct a new Battle State object with context x
	 *
	 * @param x
	 */
	BattleState(Battle *x);
	/**
	 * @brief Destroy the Battle State object
	 *
	 */
	~BattleState();
	/**
	 * @brief Pure virtual function to handle each state
	 *
	 */
	virtual void handle() = 0;
	/**
	 * @brief Change to the next state of the battle
	 *
	 */
	virtual void changeState(){};

protected:
	Battle *context;
};
#endif