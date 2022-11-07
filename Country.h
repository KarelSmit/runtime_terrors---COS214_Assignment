/**
 * @file Country.h
 * @author Karel Smit
 * @brief A wrapper class used by War to store a General and Army object
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef COUNTRY_H
#define COUNTRY_H
#include "Army.h"
#include "General.h"
#include <string>

/**
 * @brief Used to facilitate the Strategy hierarchy
 *
 * @class Country
 * Wrapper class used to store Army and General objects during the simulation of the War class
 *
 */

class Country
{
public:
	/**
	 * @brief Construct a new Country object with name x
	 *
	 * @param x
	 */
	Country(std::string x);
	/**
	 * @brief Destroy the Country object
	 *
	 */
	~Country();
	/**
	 * @brief Set the Country as the enemy
	 *
	 */
	void setEnemy();
	/**
	 * @brief Implement the Strategy given by choice against enemy
	 *
	 * @param choice
	 * @param enemy
	 */
	void makeMove(int choice, Country *enemy);
	/**
	 * @brief Get the Army object
	 *
	 * @return Army*
	 */
	Army *getArmy();
	/**
	 * @brief Get the name of the General for the Country object
	 *
	 * @return std::string
	 */
	std::string getUsername();

private:
	General *leader;
	Army *defenseForce;
};
#endif