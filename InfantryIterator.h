/**
 * @file InfantryIterator.h
 * @author Karel Smit
 * @brief An iterator for the Infantry linked list in the InfantryUnit class
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _InfantryIterator_H
#define _InfantryIterator_H

#include "InfantryUnit.h"
#include "Infantry.h"

class InfantryUnit;

/**
 * @brief Allows sequential iteration of the Infantry linked list stored within a InfantryUnit object
 *
 * @class InfantryIterator
 * An iterator for a Infantry linked list
 *
 */

class InfantryIterator
{
	friend class InfantryUnit;

public:
	/**
	 * @brief Construct a new Infantry Iterator object
	 *
	 */
	InfantryIterator();
	/**
	 * @brief Dereference the current Node
	 *
	 * @return FootUnit*
	 */
	FootUnit *operator*();
	/**
	 * @brief Iterate to the next Node in the linked list
	 *
	 * @return InfantryIterator
	 */
	InfantryIterator operator++();
	/**
	 * @brief Compare the current Node to another Node
	 *
	 * @param cmp
	 * @return true
	 * @return false
	 */
	bool operator==(const InfantryIterator &) const;
	/**
	 * @brief Construct a new parameterised Infantry Iterator object
	 *
	 * @param head
	 * @param curr
	 */
	InfantryIterator(Node<FootUnit *> *head, Node<FootUnit *> *curr);

protected:
	Node<FootUnit *> *head;
	Node<FootUnit *> *current;
};

#endif