#ifndef _TankIterator_H
#define _TankIterator_H

#include "TankUnit.h"
#include "TankDriver.h"

class TankUnit;

class TankIterator
{
	friend class TankUnit;

public:
	TankIterator();
	TransportUnit *operator*();
	TankIterator operator++();
	bool operator==(const TankIterator &) const;
	TankIterator(Node<TransportUnit*> *, Node<TransportUnit*> *);

protected:
	Node<TransportUnit *> *head;
	Node<TransportUnit *> *current;
};

#endif