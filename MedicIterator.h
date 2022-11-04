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
	Medic *operator*();
	MedicIterator operator++();
	bool operator==(const MedicIterator &) const;
	MedicIterator(Node<Medic *> *, Node<Medic *> *);

protected:
	Node<Medic *> *head;
	Node<Medic *> *current;
};

#endif
