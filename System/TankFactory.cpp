#include "TankFactory.h"
TankFactory::TankFactory()
{
}

Vehicle *TankFactory::createVehicles()
{
	Vehicle *newVehicle;
	Tank *newTank = new Tank();
	newVehicle = newTank;
	return newVehicle;
}

TankFactory::~TankFactory()
{
}