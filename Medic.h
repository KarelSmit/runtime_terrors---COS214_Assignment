#ifndef MEDIC_H
#define MEDIC_H
#include "FootUnit.h"
#include <iostream>
class Medic : public FootUnit{
    private: 
    int RP; 
    public: 
    Medic(int, int); 
    virtual ~Medic();
    int getRP();
    //  ***** need to include a =operator method *****, i%
    Medic& operator=(const Medic& m);
    bool operator==(const Medic& m);
    friend std::ostream& operator<<(std::ostream& out, const Medic& m);

};
#endif