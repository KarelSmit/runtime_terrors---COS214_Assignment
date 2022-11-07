/**
 * @file TankDriver.h
 * @author Emilee da Cruz
 * @brief Inherits from the transport unit class and created TankDriver objects
 * @date 2022-11-06
 */
#ifndef TANKDRIVER_H
#define TANKDRIVER_H
#include "TransportUnit.h"
#include "Vehicle.h"
/**
 *@class TankDriver
 */
class TankDriver : public TransportUnit
{
private:
	int Damage; // damage inflicted by a TankDriver

public:
	/**
	 *@brief constructor for tank driver. takes in two integers - one for HP and one for Damage
	 */
	TankDriver(int, int);
	/**
	 *@brief destructor
	 */
	virtual ~TankDriver();
	Vehicle *tank; // stores the tank that the driver drives
				   /**
					*@brief virtual getter function to return the damage member variable
					*@return int
					*/
	virtual int getDamage();
};
#endif