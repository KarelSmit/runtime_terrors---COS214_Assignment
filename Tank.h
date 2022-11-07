/**
 * @file Tank.h
 * @author Emilee da Cruz
 * @brief Header file for Tank class which inherits from Vehicle class
 * @date 2022-11-06
 */
#ifndef TANK_H
#define TANK_H
#include "Vehicle.h"
/**
*@class Tank
*/
class Tank : public Vehicle {
    public: 
    /**
    *@brief constructor 
    */
    Tank();
    /**
    *@brief destructor for destroying Tanks
    */
    virtual ~Tank(); 
};
#endif