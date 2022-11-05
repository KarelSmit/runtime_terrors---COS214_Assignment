#ifndef TANKFACTORY_H
#define TANKFACTORY_H
#include "VehicleFactory.h"
class TankFactory : public VehicleFactory {
    public: 
    TankFactory(); 
    Vehicle* createVehicles(); 
    virtual ~TankFactory(); 
};
#endif