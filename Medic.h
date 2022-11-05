
#ifndef MEDIC_H
#define MEDIC_H
#include "FootUnit.h"
class Medic : public FootUnit{
    private: 
    int rejuvenationPower; 
    public: 
    Medic(int, int); 
    virtual ~Medic();
    virtual int getrejuvenationPower();
};
#endif

