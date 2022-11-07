/**
 * @file Attack.h
 * @author Karel Smit
 * @brief Implementation of the Attack-type strategy
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef ATTACK_H
#define ATTACK_H
#include "Strategy.h"

/**
 * @class Attack
 * Acts as the ConcreteStrategy participant in the Strategy pattern.
 * It us used to initiate an Attack between two given armies.
 *
 * @brief Concrete implementation of Strategy
 *
 */

class Attack : public Strategy
{
public:
	/**
	 * @brief Construct a new Attack object
	 *
	 */
	Attack();
	/**
	 * @brief Destroy the Attack object
	 *
	 */
	~Attack();
	/**
	 * @brief Initiate an Attack by Army a against Army b
	 *
	 * @param a
	 * @param b
	 */
	void battlePlan(Army *a, Army *b);
};
#endif