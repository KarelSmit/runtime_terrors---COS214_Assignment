#ifndef COMBATBARRACKS_H
#define COMBATBARRACKS_H
#include "Barracks.h"
class CombatBarracks : public Barracks {
    public:
    CombatBarracks();
    Battalions* createConcreteProductA(); 
    Battalions* createConcreteProductB();
    virtual ~CombatBarracks();
}; 
#endif
#endif