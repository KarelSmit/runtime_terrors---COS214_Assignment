/**
 * @file Medic.h
 * @author Emilee da Cruz
 * @brief Header file for Medic class which inherits from FootUnit class
 * @date 2022-11-06
 */
#ifndef MEDIC_H
#define MEDIC_H
#include "FootUnit.h"
/**
*@class Medic
*/
class Medic : public FootUnit{
    private: 
    int rejuvenationPower; // integer value of how much medic can rejuvenate a soldier 
    public:
    /**
    *@brief constructor for medic class
    *@param int , int
    */ 
    Medic(int, int); 
    /**
    *@brief destroys medic object
    */
    virtual ~Medic();
    /**
    *@brief getter function for getting the rejuvenationPower member variable
    *@return int
    */
    virtual int getrejuvenationPower();
};
#endif

