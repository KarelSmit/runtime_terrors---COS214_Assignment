#ifndef WAR_H
#define WAR_H
#include "State.h"
#include "IntelDivision.h"
#include "User.h"
#include <iostream>
#include <string>
using namespace std;

class War
{
private:
    User *user;
    State *state;

public:

    War(string n, int s)
    {
        user = new User(n,s);
        state = new State();
    }

    void setScore(int i)
    {
        user->setScore(i);
    }

    string toString()
    {
        return user->toString();
    }

    //MEMENTO
    State *getState()
    {
        return state;
    }

    User *getUser()
    {
        return user;
    }

    IntelDivision *makeBackup()
    {
        User *backup = new User(*user);
        return new IntelDivision(backup, state);
    }

    void restore(IntelDivision *mem)
    {
        user = mem->getUser();
        state = mem->getState();
    }
};
#endif