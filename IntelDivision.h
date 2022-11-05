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
    IntelDivision(User *u);

    User *getUser();

    string GetName() const;

    string getDetails();

    string print();

    string date() const;
};
#endif