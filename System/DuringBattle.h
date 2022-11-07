/**
 * @file DuringBattle.h
 * @author Karel Smit
 * @brief Concrete implementation of BattleState
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef DURINGBATTLE_H
#define DURINGBATTLE_H
#include "BattleState.h"

/**
 * @brief Implements BattleState to reflect the combat portion of a Battle
 *
 * @class DuringBattle
 * Concrete implementation which adheres to the BattleState interface
 *
 */

class DuringBattle : public BattleState
{
public:
	/**
	 * @brief Construct a new DuringBattle object with context c
	 *
	 * @param c
	 */
	DuringBattle(Battle *c);
	/**
	 * @brief Destroy the During Battle object
	 *
	 */
	~DuringBattle();
	/**
	 * @brief Facilitate the choosing of a Strategy during the combat portion of a Battle
	 *
	 */
	void handle();
	/**
	 * @brief Change the state to PostBattle
	 *
	 */
	void changeState();
};

#endif