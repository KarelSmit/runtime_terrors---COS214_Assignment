/**
 * @file TankFactory.h
 * @author Emilee da Cruz
 * @brief Inherits from the Vehicle factory and is used to make objects of type Tank
 * @date 2022-11-06
 */
#ifndef TANKFACTORY_H
#define TANKFACTORY_H
#include "VehicleFactory.h"
/**
 *@class TankFactory
 */
class TankFactory : public VehicleFactory
{
public:
	/**
	 *@brief constructor
	 */
	TankFactory();
	/**
	 *@brief function for creating tank objects
	 *@return Vehicle*
	 */
	Vehicle *createVehicles();
	/**
	 *@brief virtual destructor
	 */
	virtual ~TankFactory();
};
#endif