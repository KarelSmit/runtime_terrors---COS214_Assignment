/**
 * @file War.h
 * @author Karel Smit and Natalie Walsh
 * @brief
 * @version 0.1
 * @date 2022-11-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef WAR_H
#define WAR_H
#include "IntelDivision.h"
#include "User.h"
#include "Country.h"
#include <iostream>
using namespace std;
/**
 * @class War
 * This is the class where all the design patterns act together to simulate the war.
 * This class acts as the Originator participant in the Memento design pattern
 *
 */
class War
{
private:
	User *user; /*!< Holds User object which has details on the user and their current score*/
	static War *warInstance;
	bool winner;
	int score;
	Country *sideA;
	Country *sideB;
	bool *battleHistory;

protected:
	/**
	 * @brief Construct a new War object
	 *
	 */
	War();

	/**
	 * @brief Destroy the War object
	 *
	 */
	~War();

public:
	/**
	 * @brief
	 *
	 * @return War*
	 */
	static War *startWar();

	/**
	 * @brief
	 *
	 */
	void simulate();

	/**
	 * @brief Set the Score of the User object
	 *
	 * @param s
	 */
	void setScore(int s);

	/**
	 * @brief Creates a Memento object to be saved in the Records.h
	 *
	 * @return IntelDivision*
	 */
	IntelDivision *Save();

	/**
	 * @brief Retrieve the previous version of the War user object
	 *
	 * @param memento
	 */
	void Restore(IntelDivision *memento);
};
#endif