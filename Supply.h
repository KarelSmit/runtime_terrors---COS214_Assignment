#ifndef SUPPLY_H
#define SUPPLY_H
#include "TransportUnit.h"
#include "Vehicle.h"
class Supply : public TransportUnit {
    private:
        Vehicle* supplyTruck;
        string name;
    public: 
       Supply(int,string);
       virtual ~Supply();
       Vehicle* getSupplyTruck();
}; 
#endif