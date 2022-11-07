/**
 * @file VehicleFactory.h
 * @author Emilee da Cruz
 * @brief Abstract vehicle factory class
 * @date 2022-11-06
 */
#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H
#include "Tank.h"
#include "SupplyTruck.h"
/**
 *@class VehicleFactory
 */
class VehicleFactory
{
public:
	/**
	 *@brief Vehicle factory default constructor
	 */
	VehicleFactory();
	/**
	 *@brief virtual function for creating vehicles
	 *@return Vehicle*
	 */
	virtual Vehicle *createVehicles() = 0;
	/**
	 *@brief Vehicle factory default destructor
	 */
	virtual ~VehicleFactory();
};
#endif