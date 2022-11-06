/**
 * @file TankUnit.h
 * @author Karel Smit
 * @brief Concrete implementation of Battalion using TankDriver objects
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _TANKUNIT_H
#define _TANKUNIT_H

#include "Node.h"
#include "TankIterator.h"
#include "Battalion.h"
#include "Tank.h"

/**
 * @brief Implements the Battalion interface using TankDriver objects
 *
 * @class TankUnit
 * Concrete implementation of Battalion
 *
 */

class TankUnit : public Battalion
{
	friend class TankIterator;

public:
	/**
	 * @brief Construct a new Tank Unit object
	 *
	 */
	TankUnit();
	/**
	 * @brief Destroy the Tank Unit object
	 *
	 */
	~TankUnit();
	/**
	 * @brief return the current total HP of the Tank Unit
	 *
	 * @return int
	 */
	int getHP();
	/**
	 * @brief Get the current total Damage of the Tank Unit
	 *
	 * @return int
	 */
	int getDmg();
	/**
	 * @brief Get the current total RejuvenationPower of the Tank Unit
	 *
	 * @return int
	 */
	int getRP();
	/**
	 * @brief Return a TankIterator that is currently at the beginning of the TankDriver linked list.
	 *
	 * @return TankIterator
	 */
	TankIterator begin();
	/**
	 * @brief Return a TankIterator that is currently at the end of the TankDriver linked list.
	 *
	 * @return TankIterator
	 */
	TankIterator end();
	/**
	 * @brief Set the total values based on the TankDriver linked list
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
	 * @brief Increase the total HP by restore
	 *
	 * @param restore
	 */
	void heal(int restore);

	Node<TransportUnit *> *head;

private:
	int totHP;
	int totDmg;
};

#endif
