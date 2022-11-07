/**
 * @file TankIterator.h
 * @author Karel Smit
 * @brief An iterator for the TankDriver linked list in the TankUnit class
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _TankIterator_H
#define _TankIterator_H

#include "TankUnit.h"
#include "TankDriver.h"

class TankUnit;

/**
 * @brief Allows sequential iteration of the TankDriver linked list stored within a TankUnit object
 *
 * @class TankIterator
 * An iterator for a TankDriver linked list
 *
 */

class TankIterator
{
	friend class TankUnit;

public:
	/**
	 * @brief Construct a new Tank Iterator object
	 *
	 */
	TankIterator();
	/**
	 * @brief Dereference the current Node
	 *
	 * @return TransportUnit*
	 */
	TransportUnit *operator*();
	/**
	 * @brief Iterate to the next Node in the linked list
	 *
	 * @return TankIterator
	 */
	TankIterator operator++();
	/**
	 * @brief Compare the current Node to another Node
	 *
	 * @param cmp
	 * @return true
	 * @return false
	 */
	bool operator==(const TankIterator &cmp) const;
	/**
	 * @brief Construct a new parameterised Tank Iterator object
	 *
	 * @param head
	 * @param curr
	 */
	TankIterator(Node<TransportUnit *> *head, Node<TransportUnit *> *curr);

protected:
	Node<TransportUnit *> *head;
	Node<TransportUnit *> *current;
};

#endif