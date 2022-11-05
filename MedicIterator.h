#ifndef _MedicIterator_H
#define _MedicIterator_H

#include "MedicUnit.h"
#include "Medic.h"

class MedicUnit;

class MedicIterator
{
	friend class MedicUnit;

public:
	MedicIterator();
	FootUnit *operator*();
	MedicIterator operator++();
	bool operator==(const MedicIterator &) const;
	MedicIterator(Node<FootUnit *> *, Node<FootUnit *> *);

protected:
	Node<FootUnit *> *head;
	Node<FootUnit *> *current;
};

#endif
