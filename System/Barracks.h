/**
 * @file Barracks.h
 * @author Emilee da Cruz
 * @brief Header file for Barracks class
 * @date 2022-11-06
 */
#ifndef BARRACKS_H
#define BARRACKS_H
#include "FootUnit.h"
#include "TransportUnit.h"
#include <iostream>
#include <iomanip>
#include <string>
/**
 *@class Barracks
 */
class Barracks
{
public:
	/**
	 *@brief constructs a barracks object
	 */
	Barracks();
	/**
	 *@brief virtual function for creating a foot unit
	 *@return footUnit*
	 */
	virtual FootUnit *createFootUnit() = 0;
	/**
	 *@brief virtual function for creating a TransportUnit
	 *@return TransportUnit*
	 */
	virtual TransportUnit *createTransportUnit() = 0;
	/**
	 *@brief destroys barracks object
	 */
	virtual ~Barracks();
};
#endif