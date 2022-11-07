/**
 * @file TransportUnit.h
 * @author Emilee da Cruz
 * @brief Transport unit class header file
 * @date 2022-11-06
 */
#ifndef TRANSPORTUNIT_H
#define TRANSPORTUNIT_H
/**
*@class TransportUnit
*/
class TransportUnit
{
protected:
	int HP;

public:
/**
*@brief constructor for transport unit
*/
	TransportUnit(int);
/**
*@brief destructor for transport unit
*/	
	virtual ~TransportUnit();
/**
*@brief getter function to return the HP member variable
*@return int
*/	
	int getHP();
/**
*@brief virtual function for returning the damage member variable of a class
*@return int
*/	
	virtual int getDamage();
};
#endif
