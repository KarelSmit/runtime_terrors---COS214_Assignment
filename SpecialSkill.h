#ifndef SPECIALSKILL_H
#define SPECIALSKILL_H
#include "Infantry.h"
class SpecialSkill {
    private: 
    Infantry* soldier;
    int choice;
    public: 
    void addSkill(); 
    SpecialSkill(Infantry*, int);
    ~SpecialSkill();
}; 
#endif 