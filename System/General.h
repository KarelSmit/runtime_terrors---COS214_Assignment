/**
 * @file General.h
 * @author Karel Smit
 * @brief Used to initiate the Strategy chosen by the user
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef GENERAL_H
#define GENERAL_H
#include <string>
#include "Attack.h"
#include "Defend.h"

/**
 * @brief The General class is used to initiate the chosen Strategy
 *
 * @class General
 * Initiates the chosen Strategy, and also allows switching between strategies
 *
 */

class General
{
public:
	/**
	 * @brief Construct a new General object with name x and Army f
	 *
	 * @param x
	 * @param f
	 */
	General(std::string x, Army *f);
	/**
	 * @brief Destroy the General object
	 *
	 */
	~General();
	/**
	 * @brief Set the current Strategy as Attack
	 *
	 */
	void setAttack();
	/**
	 * @brief Set the current Strategy as Defend
	 *
	 */
	void setDefend();
	/**
	 * @brief Initiate the chosen Strategy against Army e
	 *
	 * @param e
	 */
	void battlePlan(Army *e);
	/**
	 * @brief Get the name of the General
	 *
	 * @return std::string
	 */
	std::string getName();

private:
	std::string name;
	Army *myArmy;
	Strategy *plan;
};

#endif
