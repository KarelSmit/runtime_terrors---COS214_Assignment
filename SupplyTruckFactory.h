/**
 * @file SupplyTruckFactory.h
 * @author Emilee da Cruz
 * @brief Header file for SupplyTruckFactory class which inherits from VehicleFactory class
 * @date 2022-11-06
 */
#ifndef SUPPLYTRUCKFACTORY_H
#define SUPPLYTRUCKFACTORY_H
#include "VehicleFactory.h"
/**
*@class SupplyTruckFactory
*/
class SupplyTruckFactory : public VehicleFactory {
    public: 
    /**
    *@brief Constructor for SupplyTruckFactory object
    */
    SupplyTruckFactory(); 
    /**
    *@brief Inherited function for creating supply trucks
    *@return Vehicle*
    */
    Vehicle* createVehicles(); 
    /**
    *@brief Destructor
    */
    virtual ~SupplyTruckFactory();
};
#endif