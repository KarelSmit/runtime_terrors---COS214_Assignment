/**
 * @file Defend.h
 * @author Karel Smit
 * @brief Implementation of the Defend-type strategy
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef DEFEND_H
#define DEFEND_H
#include "Strategy.h"

/**
 * @class Defend
 *  Acts as the ConcreteStrategy participant in the Strategy pattern.
 * It us used to initiate the Defense of a given army.
 *
 * @brief Concrete implementation of Strategy
 *
 */

class Defend : public Strategy
{
public:
	/**
	 * @brief Construct a new Defend object
	 *
	 */
	Defend();
	/**
	 * @brief Destroy the Defend object
	 *
	 */
	~Defend();
	/**
	 * @brief Initiate a defensive move by Army a against Army b
	 *
	 * @param a
	 * @param b
	 */
	void battlePlan(Army *a, Army *b);
};

#endif
