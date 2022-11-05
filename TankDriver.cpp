#include "TankDriver.h"
#include "TankFactory.h"
TankDriver::TankDriver(int HP, int Damage) : TransportUnit(HP) {
    TankFactory* newVehicle = new TankFactory(); 
    tank = newVehicle->createVehicles(); 
    delete newVehicle;
    this->Damage = Damage;
}

TankDriver::~TankDriver(){
    delete tank; 
}