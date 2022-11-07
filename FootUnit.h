/**
 * @file FootUnit.h
 * @author Emilee da Cruz
 * @brief Header file for FootUnit class
 * @date 2022-11-06
 */
#ifndef FOOTUNIT_H
#define FOOTUNIT_H
class FootUnit
{
protected:
	int HP; // member variable for the HP
public:
	/**
	 *@brief constructs a foot unit object
	 *@param int
	 */
	FootUnit(int);
	/**
	 *@brief destroys a footunit object
	 */
	~FootUnit();
	/**
	 *@brief getter for the HP member variable
	 *@return int
	 */
	int getHP();
	/**
	 *@brief getter for the damage member variable
	 *@return int
	 */
	virtual int getDamage();
	/**
	 *@brief getter for rejuvenation power member variable
	 *@return int
	 */
	virtual int getrejuvenationPower();
};
#endif