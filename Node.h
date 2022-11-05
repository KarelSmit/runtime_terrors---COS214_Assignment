#ifndef _NODE_H
#define _NODE_H

template <typename T>
class Node
{
public:
	Node<T>(){
		next = nullptr;
	}
	T element;
	Node *next;
};

#endif
