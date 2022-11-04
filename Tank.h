#ifndef TANK_H
#define TANK_H
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Tank : public Vehicle {
    public:
    string name;
    Tank();
    Tank(string name);
    virtual ~Tank();
    void print();
    Tank& operator=(const Tank& m);
    bool operator==(const Tank& m);
    friend std::ostream& operator<<(std::ostream& out, const Tank& m);
};
#endif