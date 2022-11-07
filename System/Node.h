/**
 * @file Node.h
 * @author Karel Smit
 * @brief Stores a FootUnit or TransportUnit reference to enable a linked list
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _NODE_H
#define _NODE_H

/**
 * @brief Used to construct a linked list using FootUnit or TransportUnit references
 *
 * @class Node
 * Acts as a node within a linked list
 *
 * @tparam T
 */

template <typename T>
class Node
{
public:
	/**
	 * @brief Construct a new Node<T> object
	 *
	 */
	Node<T>()
	{
		next = nullptr;
	}
	T element;	// Stores the FootUnit or TransportUnit reference
	Node *next; // Holds a reference to the next Node in the linked list
};

#endif
