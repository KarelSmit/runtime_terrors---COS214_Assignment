/**
 * @file SupplyIterator.h
 * @author Karel Smit
 * @brief An iterator for the Supply linked list in the SupplyUnit class
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _SupplyIterator_H
#define _SupplyIterator_H

#include "SupplyUnit.h"
#include "Supply.h"

class SupplyUnit;

/**
 * @brief Allows sequential iteration of the Supply linked list stored within a SupplyUnit object
 *
 * @class SupplyIterator
 * An iterator for a Supply linked list
 *
 */

class SupplyIterator
{
	friend class SupplyUnit;

public:
	/**
	 * @brief Construct a new Supply Iterator object
	 *
	 */
	SupplyIterator();
	/**
	 * @brief Dereference the current Node
	 *
	 * @return TransportUnit*
	 */
	TransportUnit *operator*();
	/**
	 * @brief Iterate to the next Node in the linked list
	 *
	 * @return SupplyIterator
	 */
	SupplyIterator operator++();
	/**
	 * @brief Compare the current Node to another Node
	 *
	 * @param cmp
	 * @return true
	 * @return false
	 */
	bool operator==(const SupplyIterator &cmp) const;
	/**
	 * @brief Construct a new parameterised Supply Iterator object
	 *
	 * @param head
	 * @param curr
	 */
	SupplyIterator(Node<TransportUnit *> *head, Node<TransportUnit *> *curr);

protected:
	Node<TransportUnit *> *head;
	Node<TransportUnit *> *current;
};

#endif