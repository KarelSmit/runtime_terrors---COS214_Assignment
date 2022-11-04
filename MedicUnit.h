#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

/*  #include "Node.h"*/
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

	Node<Medic *> *head;
	// friend class MedicIterator<Medic>;
	//        public:
	//            MedicUnit();
	// linked list of medics

	//            MedicIterator<T> begin();
	//            MedicIterator<T> first();
	//            MedicIterator<T> end();
private:
	int totHP;
	int totRP;
};

//#include "MedicUnit.cpp"

#endif
