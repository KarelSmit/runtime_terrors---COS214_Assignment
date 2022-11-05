
#include "Supply.h"
#include "SupplyTruckFactory.h"
Supply::Supply(int HP) : TransportUnit(HP) {
    SupplyTruckFactory* newVehicle = new SupplyTruckFactory(); 
    supplyTruck = newVehicle->createVehicles(); 
}

Supply::~Supply() { 
    supplyTruck->~Vehicle();
}

Vehicle* Supply::getSupplyTruck() {
    return this->supplyTruck;
}