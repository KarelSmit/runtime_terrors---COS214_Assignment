
#ifndef SUPPLY_H
#define SUPPLY_H
#include "TransportUnit.h"
#include "Vehicle.h"
class Supply : public TransportUnit {
    private:
    Vehicle* supplyTruck;
    public: 
    Supply(int); 
    virtual ~Supply();
    Vehicle* getSupplyTruck();
}; 

#endif