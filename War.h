#ifndef WAR_H
#define WAR_H
#include "IntelDivision.h"
#include "User.h"
#include <iostream>
using namespace std;

class War
{
private:
    User *user;

public:
    War(string n, int s)
    {
        user = new User(n, s);
        cout << "Originator: My initial state is: " << this->user->getUserDetails() << "\n";
    }

    void setScore(int s)
    {
        user->setUserScore(s);
    }

    IntelDivision *Save()
    {
        return new IntelDivision(this->user);
    }

    void Restore(IntelDivision *memento)
    {
        this->user = memento->getUser();
        cout << "Originator: My state has changed to: " << this->user->getUserDetails() << "\n";
    }
};
#endif