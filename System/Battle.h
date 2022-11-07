/**
 * @file Battle.h
 * @author Karel Smit
 * @brief Handles the BattleState of each Battle, and holds the winner
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef BATTLE_H
#define BATTLE_H
#include "Country.h"
#include "PreBattle.h"

/**
 * @brief Create and initiate the BattleState for each Battle, also holds the winner
 *
 * @class Battle
 *Creates and initiates the BatteState for each Battle.
 *
 */
class Battle
{
public:
	/**
	 * @brief Construct a new Battle object betweeen Country a and Country b
	 *
	 * @param x
	 * @param y
	 */
	Battle(Country *x, Country *y);
	/**
	 * @brief Destroy the Battle object
	 *
	 */
	~Battle();
	/**
	 * @brief Initiate the BattleState object
	 *
	 */
	void begin();
	/**
	 * @brief Set the BattleState object
	 *
	 * @param x
	 */
	void setState(BattleState *x);
	/**
	 * @brief Return the Country object for SideA
	 *
	 * @return Country*
	 */
	Country *getA();
	/**
	 * @brief Return the Country object for SideB
	 *
	 * @return Country*
	 */
	Country *getB();
	bool winner;

private:
	Country *sideA;
	Country *sideB;
	BattleState *state;
};
#endif
