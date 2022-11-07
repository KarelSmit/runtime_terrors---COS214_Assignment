/**
 * @file SupplyTruc.h
 * @author Emilee da Cruz
 * @brief Header file for SupplyTruck class which inherits from Vehicle class
 * @date 2022-11-06
 */
#ifndef SUPPLYTRUCK_H
#define SUPPLYTRUCK_H
#include "Vehicle.h"
/**
*@class SupplyTruck
*/
class SupplyTruck : public Vehicle{
    public: 
    /**
    *@brief SupplyTruck object constructor
    */
    SupplyTruck();
    /**
    *@brief destructor destroys supply truck object
    */
    virtual ~SupplyTruck();
};
#endif