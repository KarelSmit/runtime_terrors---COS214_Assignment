#ifndef INFANTRYUNIT_H
#define INFANTRYUNIT_H

#include "Node.h"
#include "InfantryIterator.h"
#include "Battalion.h"
#include "Infantry.h"

class InfantryUnit : public Battalion
{
	friend class InfantryIterator;

public:
	InfantryUnit();
	~InfantryUnit();
	int getHP();
	int getDmg();
	int getRP();
	InfantryIterator begin();
	InfantryIterator end();
	void setVal();
	bool takeDamage(int);
	void heal(int);

	Node<FootUnit *> *head;

private:
	int totHP;
	int totDmg;
};

#endif