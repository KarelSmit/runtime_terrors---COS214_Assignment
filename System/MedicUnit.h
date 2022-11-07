/**
 * @file MedicUnit.h
 * @author Karel Smit
 * @brief  Concrete implementation of Battalion using MedicDriver objects
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

#include "Node.h"
#include "MedicIterator.h"
#include "Battalion.h"
#include "Medic.h"

/**
 * @brief Implements the Battalion interface using Medic objects
 *
 * @class MedicUnit
 * Concrete implementation of Battalion
 *
 */

class MedicUnit : public Battalion
{
	friend class MedicIterator;

public:
	/**
	 * @brief Construct a new Medic Unit object
	 *
	 */
	MedicUnit();
	/**
	 * @brief Destroy the Medic Unit object
	 *
	 */
	~MedicUnit();
	/**
	 * @brief Return the current total HP of the Medic Unit
	 *
	 * @return int
	 */
	int getHP();
	/**
	 * @brief Get the current total Damage of the Medic Unit
	 *
	 * @return int
	 */
	int getDmg();
	/**
	 * @brief Get the current total RejuvenationPower of the Medic Unit
	 *
	 * @return int
	 */
	int getRP();
	/**
	 * @brief Return a MedicIterator that is currently at the beginning of the Medic linked list.
	 *
	 * @return MedicIterator
	 */
	MedicIterator begin();
	/**
	 * @brief Return a MedicIterator that is currently at the end of the Medic linked list.
	 *
	 * @return MedicIterator
	 */
	MedicIterator end();
	/**
	 * @brief Set the total values based on the Medic linked list
	 *
	 */
	void setVal();
	/**
	 * @brief  Reduce the total HP by d
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
	int totRP;
};

#endif
