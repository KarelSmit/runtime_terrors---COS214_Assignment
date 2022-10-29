#ifndef INTELDIVISION_H
#define INTELDIVISION_H
#include <iostream>
#include "State.h"
#include "War.h"
using namespace std;

//Memento
class IntelDivision{
private:
    War *war;
    State *state;

public:
    IntelDivision(War *w, State *s) : war(w), state(s) {}

    War *getWar()
    {
        return war;
    }

    State *getState()
    {
        return state;
    }
};
#endif