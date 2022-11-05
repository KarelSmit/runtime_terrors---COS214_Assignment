#ifndef WAR_H
#define WAR_H
#include "IntelDivision.h"
#include "User.h"
#include <iostream>
using namespace std;

///This is the class where all the design patterns act together to simulate the war.
///
///This class acts as the Originator participant in the Memento design pattern
class War
{
private:
    User *user;
  
public:
    War(string n, int s)
    {
        user = new User(n, s);
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
    }
};
#endif