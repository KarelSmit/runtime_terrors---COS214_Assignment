#ifndef BARRACKS_H
#define BARRACKS_H
#include "Battalions.h"
#include <iostream> 
#include <iomanip> 
#include <string> 
class Barracks {
    public:
    Barracks(); 
    virtual Battalions* createConcreteProductA() = 0; 
    virtual Battalions* createConcreteProductB() = 0;
    virtual ~Barracks():
}; 
#endif