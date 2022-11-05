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
    virtual FootUnit* createFootUnit() = 0; 
    virtual TransportUnit* createTransportUnit() = 0;
    virtual ~Barracks();
}; 
#endif