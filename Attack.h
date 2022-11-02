#ifndef ATTACK_H
#define ATTACK_H
#include "Strategy.h"

class Attack : public Strategy
{
public:
	Attack();
	~Attack();
	void battlePlan( Army*, Army* );
};
#endif