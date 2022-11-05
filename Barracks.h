#ifndef BARRACKS_H
#define BARRACKS_H
#include "FootUnit.h"
#include "TransportUnit.h"
#include <iostream> 
#include <iomanip> 
#include <string> 
class Barracks {
    public:
    Barracks(); 
    virtual FootUnit* createConcreteProductA() = 0; 
    virtual TransportUnit* createConcreteProductB() = 0;
    virtual ~Barracks();
}; 
#endif