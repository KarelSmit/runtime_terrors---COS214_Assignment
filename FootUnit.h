#ifndef FOOTUNIT_H
#define FOOTUNIT_H
#include <iostream>
#include <string>

using namespace std;

class FootUnit {
    protected: 
    int HP;
    string name;
    public:
    FootUnit();
    FootUnit(int);
    FootUnit(string, int);
    ~FootUnit();
    int getHP();
    string getName();
};
#endif