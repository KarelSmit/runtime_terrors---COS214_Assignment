#include "SupplyTruckFactory.h"
SupplyTruckFactory::SupplyTruckFactory(){

}

Vehicle* SupplyTruck::createVehicles() {
    Vehicle* newVehicle; 
    SupplyTruck* newSTruck = new SupplyTruck();
    newVehicle = newSTruck; 
    return newVehicle;
}

SupplyTruckFactory::~SupplyTruckFactory() {
    
}