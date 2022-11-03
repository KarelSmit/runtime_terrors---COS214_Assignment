#ifndef TANKDRIVER_H
#define TANKDRIVER_H
#include "TransportUnit.h"
#include "Vehicle.h"
class TankDriver : public TransportUnit { 
    private: 
    int Damage; 
    public:
    TankDriver(int, int);
    virtual ~TankDriver();
    Vehicle* tank; 
};
#endif