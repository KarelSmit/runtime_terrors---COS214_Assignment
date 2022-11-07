/**
 * @file Infantry.h
 * @author Emilee da Cruz
 * @brief Header file for Infantry class which inherits from FootUnit class
 * @date 2022-11-06
 */
#ifndef INFANTRY_H
#define INFANTRY_H
#include "FootUnit.h"
/**
*@class Infantry
*/
class Infantry : public FootUnit{
    private: 
    int Damage; // damage inflicted by infantry soldier
    public: 
    /**
    *@brief constructor for infantry class
    *@param int, int
    */
    Infantry(int, int); 
    /**
    *@brief destroys infantry object
    */
    virtual ~Infantry();
    /**
    *@brief getter for the damage member variable
    *@return int
    */
    int getDamage();
    /**
    *@brief setter for damage member variable
    *@return void
    *@param int
    */ 
    void setDamage(int);
    /**
    *@brief setter for HP member variable
    *@return void
    *@param int
    */ 
    void setHP(int);
};
#endif