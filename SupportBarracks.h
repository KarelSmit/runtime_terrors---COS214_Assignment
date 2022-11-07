/**
 * @file SupportBarracks.h
 * @author Emilee da Cruz
 * @brief Inherits from Barracks and is used for creating support barracks
 * @date 2022-11-06
 */
#ifndef SUPPORTBARRACKS_H
#define SUPPORTBARRACKS_H
#include "Barracks.h"
/**
*@class SupportBarracks
*/
class SupportBarracks : public Barracks {
    public:
/**
*@brief default constructor
*/
    SupportBarracks(); 
/**
*@brief function for creating foot unit soldiers
*@return FootUnit*
*/    
    FootUnit* createFootUnit();
/**
*@brief class for creating transport unit soldiers
*@return TransportUnit*
*/     
    TransportUnit* createTransportUnit();
}; 
#endif