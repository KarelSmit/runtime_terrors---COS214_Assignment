#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include "TransportUnit.h"
class Vehicle {
    public: 
    Vehicle();
    TransportUnit* driver; 
    virtual ~Vehicle();
};
#endif