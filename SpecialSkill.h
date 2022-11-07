/**
 * @file SpecialSkill.h
 * @author Emilee da Cruz
 * @brief Header file for SpeicalSkill class which acts as the decorator 
 * @date 2022-11-06
 */
#ifndef SPECIALSKILL_H
#define SPECIALSKILL_H
#include "Infantry.h"
/**
*@class SpecialSkill
*/
class SpecialSkill {
    private: 
    Infantry* soldier; // member variable to hold an infantry object
    int choice; // member variable for deciding whether to call stealth or sniper class
    public: 
    /**
    *@brief function to add a special skill to an infantry object
    *@return void
    */
    void addSkill();
    /**
    *@brief Constructor for special skill
    *@param Infantry* , int
    */ 
    SpecialSkill(Infantry*, int);
    /**
    *@brief destroys special skill object 
    */
    ~SpecialSkill();
}; 
#endif 