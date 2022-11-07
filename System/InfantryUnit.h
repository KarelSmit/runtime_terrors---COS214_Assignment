/**
 * @file InfantryUnit.h
 * @author Karel Smit
 * @brief Concrete implementation of Battalion using Infantry objects
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef INFANTRYUNIT_H
#define INFANTRYUNIT_H

#include "Node.h"
#include "InfantryIterator.h"
#include "Battalion.h"
#include "Infantry.h"

/**
 * @brief Implements the Battalion interface using Infantry objects
 *
 * @class InfantryUnit
 * Concrete implementation of Battalion
 *
 */

class InfantryUnit : public Battalion
{
	friend class InfantryIterator;

public:
	/**
	 * @brief Construct a new Infantry Unit object
	 *
	 */
	InfantryUnit();
	/**
	 * @brief Destroy the Infantry Unit object
	 *
	 */
	~InfantryUnit();
	/**
	 * @brief Return the current total HP of the Infatry Unit
	 *
	 * @return int
	 */
	int getHP();
	/**
	 * @brief Get the current total Damage of the Infantry Unit
	 *
	 * @return int
	 */
	int getDmg();
	/**
	 * @brief Get the current total RejuvenationPower of the Infantry Unit
	 *
	 * @return int
	 */
	int getRP();
	/**
	 * @brief Return a InfantryIterator that is currently at the beginning of the Infantry linked list.
	 *
	 * @return InfantryIterator
	 */
	InfantryIterator begin();
	/**
	 * @brief Return a InfantryIterator that is currently at the end of the Infantry linked list.
	 *
	 * @return InfantryIterator
	 */
	InfantryIterator end();
	/**
	 * @brief Set the total values based on the Infantry linked list
	 *
	 */
	void setVal();
	/**
	 * @brief Reduce the total HP by d
	 *
	 * @param d
	 * @return true
	 * @return false
	 */
	bool takeDamage(int d);
	/**
	 * @brief Increase the total HP by r
	 *
	 * @param r
	 */
	void heal(int r);

	Node<FootUnit *> *head;

private:
	int totHP;
	int totDmg;
};

#endif