#ifndef _SupplyIterator_H
#define _SupplyIterator_H

#include "SupplyUnit.h"
#include "Supply.h"

class SupplyUnit;

class SupplyIterator
{
	friend class SupplyUnit;

public:
	SupplyIterator();
	TransportUnit *operator*();
	SupplyIterator operator++();
	bool operator==(const SupplyIterator &) const;
	SupplyIterator(Node<TransportUnit *> *, Node<TransportUnit *> *);

protected:
	Node<TransportUnit *> *head;
	Node<TransportUnit *> *current;
};

#endif