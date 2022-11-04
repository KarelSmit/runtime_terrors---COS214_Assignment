#ifndef MEDIC_H
#define MEDIC_H
#include "FootUnit.h"
#include <iostream>
#include <string>

using namespace std;
class Medic : public FootUnit{
    private: 
    int RP; 
    string name;
    public: 
    Medic();
    Medic(int, int);
    Medic(string, int, int );

    virtual ~Medic();
    int getRP();
    void print();
    Medic& operator=(const Medic& m);
    bool operator==(const Medic& m);
    friend std::ostream& operator<<(std::ostream& out, const Medic& m);

};
#endif