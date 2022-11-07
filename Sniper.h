/**
 * @file Sniper.h
 * @author Emilee da Cruz
 * @brief Header file for Sniper class
 * @date 2022-11-06
 */
#ifndef SNIPER_H
#define SNIPER_H
#include "Infantry.h"
/**
*@class Sniper
*/
class Sniper { 
    public: 
    /**
    *@brief constructor for sniper class
    */
    Sniper(Infantry*); 
    /**
    *@brief destroys sniper object
    */
    ~Sniper(); 
}; 
#endif 