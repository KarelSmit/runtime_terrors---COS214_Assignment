
#ifndef MEDIC_H
#define MEDIC_H
#include "FootUnit.h"
class Medic : public FootUnit{
    private: 
    int rejuvenationPower; 
    public: 
    Medic(int, int); 
    virtual ~Medic();
    int getrejuvenationPower();
};
#endif

