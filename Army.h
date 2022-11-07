/**
 * @file Army.h
 * @author Karel Smit
 * @brief Contains the Army class, which is used for each battle in the simulation.
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef ARMY_H
#define ARMY_H
#include "Battalion.h"
#include <string>

/**
 * @class Army
 * Used to perform the Attack or Defend strategy between the two conflicting sides in a battle.
 * 
 */

class Army
{
public:
	/**
	 * @brief Construct a new Army object
	 *
	 */
	Army();
	/**
	 * @brief Destroy the Army object
	 *
	 */
	~Army();
	/**
	 * @brief Add x Infantry battalions to the Army
	 *
	 * @param x
	 */
	void addInfantry(int x);
	/**
	 * @brief  Add x Tank battalions to the Army
	 *
	 * @param x
	 */
	void addTank(int x);
	/**
	 * @brief Add x Medic battalions to the Army
	 *
	 * @param x
	 */
	void addMedic(int x);
	/**
	 * @brief Add x Supply battalions to the Army
	 *
	 * @param x
	 */
	void addSupply(int x);
	/**
	 * @brief Update the HP, Damage, RP and ExtraMoves of the army to reflect the current state of it's battalions
	 *
	 */
	void updateStats();
	/**
	 * @brief Return the total value of the army's Damage
	 *
	 * @return int
	 */
	int getDamage();
	/**
	 * @brief Deal x amount of damage to the leading battalion in the army
	 *
	 * @param x
	 */
	void takeDamage(int x);
	/**
	 * @brief Use the RejuvenationPower of the army to restore that amount of HP to the lead battalion
	 *
	 */
	void heal();
	/**
	 * @brief Reset the values and Battalions of the army to prepare for the next battle
	 *
	 */
	void reset();
	/**
	 * @brief Return the number of ExtraMoves that the Army currently is allowed
	 *
	 * @return int
	 */
	int getMoves();
	/**
	 * @brief Return the current total HP of the army
	 *
	 * @return int
	 */
	int getHP();
	/**
	 * @brief Set the army as the Enemy in the simulation
	 *
	 */
	void setEnemy();
	/**
	 * @brief Set the name of the Army general
	 *
	 * @param y
	 */
	void setCommander(std::string y);
	/**
	 * @brief Print the current state of the army
	 *
	 */
	void printStats();

private:
	Battalion *atkForce; //Linked list of Infantry and Tank battalions
	Battalion *medicForce; //Linked list of Medic battalions
	Battalion *supplyChain; //Linked list of Supply battalions
	int totalDmg; //Total damage the army can currently deal
	int totalHP; //Total HP the army currently has
	int extraMoves;//Total ExtraMoves the army currently has
	int totalHeal;//Total amount of HP that the army can currently restore by defending
	bool enemy;//Indicates if the army is an enemy
	std::string gName; //Name of the General for the army
};
#endif