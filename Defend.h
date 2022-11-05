#ifndef DEFEND_H
#define DEFEND_H
#include "Strategy.h"

class Defend : public Strategy
{
public:
	Defend();
	~Defend();
	void battlePlan(Army*, Army*);
};

#endif
