/**
 * @file SupplyUnit.h
 * @author Karel Smit
 * @brief Concrete implementation of Battalion using Supply objects
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _SUPPLYUNIT_H
#define _SUPPLYUNIT_H

#include "Node.h"
#include "SupplyIterator.h"
#include "Battalion.h"
#include "Supply.h"

/**
 * @brief Implements the Battalion interface using Supply objects
 *
 * @class SupplyUnit
 * Concrete implementation of Battalion
 *
 */

class SupplyUnit : public Battalion
{
	friend class SupplyIterator;

public:
	/**
	 * @brief Construct a new Supply Unit object
	 *
	 */
	SupplyUnit();
	/**
	 * @brief Destroy the Supply Unit object
	 *
	 */
	~SupplyUnit();
	/**
	 * @brief Return the current total HP of the Supply Unit
	 *
	 * @return int
	 */
	int getHP();
	/**
	 * @brief Get the current total Damage of the Supply Unit
	 *
	 * @return int
	 */
	int getDmg();
	/**
	 * @brief Get the current total RP of the Supply Unit
	 *
	 * @return int
	 */
	int getRP();
	/**
	 * @brief Return a SupplyIterator that is currently at the beginning of the Supply linked list.
	 *
	 * @return SupplyIterator
	 */
	SupplyIterator begin();
	/**
	 * @brief Return a SupplyIterator that is currently at the end of the Supply linked list.
	 *
	 * @return SupplyIterator
	 */
	SupplyIterator end();
	/**
	 * @brief Set the total values based on the Supply linked list
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

	Node<TransportUnit *> *head;

private:
	int totHP;
};

#endif
