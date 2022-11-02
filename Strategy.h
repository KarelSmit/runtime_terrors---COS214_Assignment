#ifndef STRATEGY_H
#define STRATEGY_H
#include "Army.h"

class Strategy
{
public:
	Strategy();
	~Strategy();
	virtual void battlePlan( Army*, Army* ) = 0;
};

#endif