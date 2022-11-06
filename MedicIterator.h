/**
 * @file MedicIterator.h
 * @author Karel Smit
 * @brief An iterator for the Medic linked list in the MedicUnit class
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _MedicIterator_H
#define _MedicIterator_H

#include "MedicUnit.h"
#include "Medic.h"

class MedicUnit;

/**
 * @brief Allows sequential iteration of the Medic linked list stored within a MedicUnit object
 *
 * @class MedicIterator
 * An iterator for a Medic linked list
 *
 */

class MedicIterator
{
	friend class MedicUnit;

public:
	/**
	 * @brief Construct a new Medic Iterator object
	 *
	 */
	MedicIterator();
	/**
	 * @brief Dereference the current Node
	 *
	 * @return FootUnit*
	 */
	FootUnit *operator*();
	/**
	 * @brief Iterate to the next Node in the linked list
	 *
	 * @return MedicIterator
	 */
	MedicIterator operator++();
	/**
	 * @brief Compare the current Node to another Node
	 *
	 * @param cmp
	 * @return true
	 * @return false
	 */
	bool operator==(const MedicIterator &) const;
	/**
	 * @brief Construct a new parameterised Medic Iterator object
	 *
	 * @param head
	 * @param curr
	 */
	MedicIterator(Node<FootUnit *> *head, Node<FootUnit *> *curr);

protected:
	Node<FootUnit *> *head;
	Node<FootUnit *> *current;
};

#endif
