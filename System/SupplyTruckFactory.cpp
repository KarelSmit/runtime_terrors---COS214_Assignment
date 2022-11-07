#include "SupplyTruckFactory.h"
SupplyTruckFactory::SupplyTruckFactory()
{
}

Vehicle *SupplyTruckFactory::createVehicles()
{
	Vehicle *newSTruck = new SupplyTruck();
	return newSTruck;
}

SupplyTruckFactory::~SupplyTruckFactory()
{
}