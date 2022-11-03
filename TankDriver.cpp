#include "TankDriver.h"
#include "TankFactory.h"
TankDriver::TankDriver(int HP, int Damage) : TransportUnit(HP) {
    TankFactory* newVehicle = new TankFactory(); 
    tank = newVehicle->createVehicles(); 
    this->Damage = Damage;
}

TankDriver::~TankDriver(){
    tank->~Vehicle();
}