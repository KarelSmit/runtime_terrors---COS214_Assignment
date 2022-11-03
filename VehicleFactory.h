#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H
#include "Tank.h"
#include "SupplyTruck.h"
class VehicleFactory {
    public: 
    VehicleFactory(); 
    virtual Vehicle* createVehicles() = 0; 
    virtual ~VehicleFactory(); 
};
#endif