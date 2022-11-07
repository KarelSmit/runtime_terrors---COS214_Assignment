/**
 * @file Stealth.h
 * @author Emilee da Cruz
 * @brief Header file for Stealth class which decorated Infantry object
 * @date 2022-11-06
 */
#ifndef STEALTH_H
#define STEALTH_H
#include "Infantry.h"
/**
*@class Stealth
*/
class Stealth { 
    public: 
    /**
    *@brief constructor for Stealth object
    *@param Infantry*
    */
    Stealth(Infantry*); 
    /**
    *@brief destroys stealth object
    */
    ~Stealth();
};
#endif