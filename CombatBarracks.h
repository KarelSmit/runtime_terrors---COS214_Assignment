#ifndef COMBATBARRACKS_H
#define COMBATBARRACKS_H
#include "Barracks.h"
class CombatBarracks : public Barracks
{
public:
	CombatBarracks();
	FootUnit *createFootUnit();
	TransportUnit *createTransportUnit();
	virtual ~CombatBarracks();
};
#endif