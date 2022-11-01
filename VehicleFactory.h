#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H
#include "Tank.h"
#include "SupplyTruck.h"
class VehicleFactory {
    private: 
    Vehicle* vehicle; 

    public: 
    VehicleFactory(); 
    virtual Vehicle* createVehicles() = 0; 
    virtual ~VehicleFactory(); 
};
#endif