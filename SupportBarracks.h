#ifndef SUPPORTBARRACKS_H
#define SUPPORTBARRACKS_H
#include "Barracks.h"
class SupportBarracks : public Barracks {
    public:
    SupportBarracks(); 
    Battalions* createConcreteProductA(); 
    Battalions* createConcreteProductB();
}; 
#endif