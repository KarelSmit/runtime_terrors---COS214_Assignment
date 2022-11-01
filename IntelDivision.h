#ifndef INTELDIVISION_H
#define INTELDIVISION_H
#include <iostream>
#include <string>
#include "State.h"
#include "War.h"
#include "User.h"
using namespace std;

//Memento
class IntelDivision
{
private:
    User *user;
    State *state;

public:
    IntelDivision(User *u, State *s) : user(u), state(s) {}

    User *getUser()
    {
        return user;
    }

    State *getState()
    {
        return state;
    }
};
#endif