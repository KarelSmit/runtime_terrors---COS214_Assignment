/**
 * @file PostBattle.h
 * @author Karel Smit
 * @brief Concrete implementation of BattleState
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef POSTBATTLE_H
#define POSTBATTLE_H
#include "BattleState.h"

/**
 * @brief Implements BattleState to reflect the scoring portion of a Battle
 *
 * @class PostBattle
 * Concrete implementation which adheres to the BattleState interface
 *
 */

class PostBattle : public BattleState
{
public:
	/**
	 * @brief Construct a new PostBattle object with context c
	 *
	 * @param c
	 */
	PostBattle(Battle *);
	/**
	 * @brief Destroy the PostBattle object
	 *
	 */
	~PostBattle();
	/**
	 * @brief Determine the winner of a Battle
	 *
	 */
	void handle();
};

#endif