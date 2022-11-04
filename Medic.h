#ifndef MEDIC_H
#define MEDIC_H
#include "FootUnit.h"
class Medic : public FootUnit{
    private: 
    int RP; 
    public: 
    Medic(int, int); 
    virtual ~Medic();
    int getRP();
};
#endif