#ifndef _InfantryIterator_H
#define _InfantryIterator_H

#include "InfantryUnit.h"
#include "Infantry.h"

class InfantryUnit;

class InfantryIterator
{
	friend class InfantryUnit;

public:
	InfantryIterator();
	FootUnit *operator*();
	InfantryIterator operator++();
	bool operator==(const InfantryIterator &) const;
	InfantryIterator(Node<FootUnit *> *, Node<FootUnit *> *);

protected:
	Node<FootUnit *> *head;
	Node<FootUnit *> *current;
};

#endif