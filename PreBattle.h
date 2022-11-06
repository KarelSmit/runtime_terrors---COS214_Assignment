/**
 * @file PreBattle.h
 * @author Karel Smit
 * @brief Concrete implementation of BattleState
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef PREBATTLE_H
#define PREBATTLE_H
#include "BattleState.h"

/**
 * @brief Implements BattleState to reflect the planning portion of a Battle
 *
 * @class PreBattle
 * Concrete implementation which adheres to the BattleState interface
 *
 */

class PreBattle : public BattleState
{
public:
	/**
	 * @brief Construct a new PreBattle object with context c
	 *
	 * @param c
	 */
	PreBattle(Battle *c);
	/**
	 * @brief Destroy the PreBattle object
	 *
	 */
	~PreBattle();
	/**
	 * @brief Facilitate the choice of a Battalion combination during the planning portion of a Battle
	 *
	 */
	void handle();
	/**
	 * @brief Change the state to DuringBattle
	 *
	 */
	void changeState();
};

#endif