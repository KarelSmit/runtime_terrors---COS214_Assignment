#include "Supply.h"
#include "SupplyTruckFactory.h"
Supply::Supply(int HP) : TransportUnit(HP) {
    SupplyTruckFactory* newVehicle = new SupplyTruckFactory(); 
    supplyTruck = newVehicle->createVehicles(); 
}

Supply::~Supply() { 
    delete supplyTruck;
}

Vehicle* Supply::getSupplyTruck() {
    return this->supplyTruck;
}