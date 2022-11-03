#ifndef INFANTRY_H
#define INFANTRY_H
#include "FootUnit.h"
class Infantry : public FootUnit{
    private: 
    int Damage; 
    public: 
    Infantry(int, int); 
    virtual ~Infantry();
    int getDamage(); 
};
#endif