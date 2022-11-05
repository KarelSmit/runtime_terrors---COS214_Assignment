#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

#include "Node.h"
#include "MedicIterator.h"
#include "Battalion.h"
#include "Medic.h"

class MedicUnit : public Battalion
{
	friend class MedicIterator;

public:
	MedicUnit();
	~MedicUnit();
	int getHP();
	int getDmg();
	int getRP();
	MedicIterator begin();
	MedicIterator end();
	void setVal();

	Node<FootUnit *> *head;
private:
	int totHP;
	int totRP;
};

#endif
