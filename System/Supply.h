/**
 * @file Tank.h
 * @author Emilee da Cruz
 * @brief Header file for Supply class which inherits from TransportUnit class
 * @date 2022-11-06
 */
#ifndef SUPPLY_H
#define SUPPLY_H
#include "TransportUnit.h"
#include "Vehicle.h"
/**
 *@class Supply
 */
class Supply : public TransportUnit
{
private:
	Vehicle *supplyTruck; // member variable holds a supplyTruck object in a vehicle pointer
public:
	/**
	 *@brief constructor for supply
	 */
	Supply(int);
	/**
	 *@brief destroys supply object
	 */
	virtual ~Supply();
	/**
	 *@brief Getter function to return the object as a Vehicle*
	 *@return Vehicle*
	 */
	Vehicle *getSupplyTruck();
};
#endif