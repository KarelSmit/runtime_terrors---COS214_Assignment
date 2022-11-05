#ifndef INTELDIVISION_H
#define INTELDIVISION_H
#include "User.h"
#include <string>
#include <iostream>
using namespace std;

class IntelDivision
{
private:
    User *user;
    string date_;

public:
    IntelDivision(User *u) : user(u)
    {
        this->user = new User(*u);
        time_t now = time(0);
        this->date_ = ctime(&now);
    }

    User *getUser()
    {
        return this->user;
    }

    string GetName() const
    {
        return this->date_ + " / (" + this->user->getUserDetails() + ")";
    }

    string getDetails()
    {
        return user->getUserName() + ";" + to_string(user->getUserScore());
    }

    string print()
    {
        return user->getUserName() + " achieved " + to_string(user->getUserScore());
    }

    string date() const
    {
        return this->date_;
    }
};
#endif