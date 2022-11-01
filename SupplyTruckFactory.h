#ifndef SUPPLYTRUCKFACTORY_H
#define SUPPLYTRUCKFACTORY_H
#include "VehicleFactory.h"
class SupplyTruckFactory : public VehicleFactory {
    public: 
    SupplyTruckFactory(); 
    Vehicle* createVehicles(); 
    virtual ~SupplyTruckFactory();
};
#endif