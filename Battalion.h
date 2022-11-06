/**
 * @file Battalion.h
 * @author Karel Smit
 * @brief Template class for all battalions
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _BATTALION_H
#define _BATTALION_H

/**
 * @class Battalion
 * Specifies the interface for all other battalion classes
 *
 * @brief Abstract parent for InfantryUnit, TankUnit, MedicUnit and SupplyUnit. Also acts as a node for the Army class
 *
 */

class Battalion
{
public:
	/**
	 * @brief Construct a new Battalion object
	 *
	 */
	Battalion();
	/**
	 * @brief Destroy the Battalion object
	 *
	 */
	~Battalion();
	/**
	 * @brief Abstract interface to get the HP of InfantryUnit/TankUnit/MedicUnit/SupplyUnit
	 *
	 * @return int
	 */
	virtual int getHP() = 0;
	/**
	 * @brief Abstract interface to get the Damage of InfantryUnit/TankUnit/MedicUnit/SupplyUnit
	 *
	 * @return int
	 */
	virtual int getDmg() = 0;
	/**
	 * @brief Abstract interface to get the RejuvenationPower of InfantryUnit/TankUnit/MedicUnit/SupplyUnit
	 *
	 * @return int
	 */
	virtual int getRP() = 0;
	/**
	 * @brief Abstract interface to deal x damage to a InfantryUnit/TankUnit/MedicUnit/SupplyUnit
	 * Returns a boolean stating whether the target has sustained enough damage to be destroyed
	 *
	 * @param x
	 * @return true
	 * @return false
	 */
	virtual bool takeDamage(int x) = 0;
	/**
	 * @brief Abstract interface to restore x HP of a InfantryUnit/TankUnit/MedicUnit/SupplyUnit
	 *
	 * @param x
	 */
	virtual void heal(int x) = 0;
	Battalion *next; // The next Battalion in the Army linked list
};
#endif
