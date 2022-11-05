#ifndef _TANKUNIT_H
#define _TANKUNIT_H

#include "Node.h"
#include "TankIterator.h"
#include "Battalion.h"
#include "Tank.h"

class TankUnit : public Battalion
{
	friend class TankIterator;

public:
	TankUnit();
	~TankUnit();
	int getHP();
	int getDmg();
	int getRP();
	TankIterator begin();
	TankIterator end();
	void setVal();

	Node<Tank *> *head;
private:
	int totHP;
	int totDmg;
};

#endif

