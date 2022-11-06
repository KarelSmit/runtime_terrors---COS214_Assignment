/**
 * @file Strategy.h
 * @author Karel Smit
 * @brief Abstract class for the Strategy pattern
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef STRATEGY_H
#define STRATEGY_H
#include "Army.h"

class Strategy
{
public:
	/**
	 * @brief Construct a new Strategy object
	 *
	 */
	Strategy();
	/**
	 * @brief Destroy the Strategy object
	 *
	 */
	~Strategy();
	/**
	 * @brief Initiate the chosen ConcreteStrategy for Army a against Army b
	 *
	 * @param a
	 * @param b
	 */
	virtual void battlePlan(Army *a, Army *b) = 0;
};

#endif