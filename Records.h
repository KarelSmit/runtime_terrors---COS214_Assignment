#ifndef RECORDS_H
#define RECORDS_H
#include "War.h"
#include "IntelDivision.h"
#include <iostream>
using namespace std;

//Caretaker
class Records{
private:
    IntelDivision *inteldiv;

public:
    Records() : inteldiv(0) {}

    IntelDivision *getIntelDiv()
    {
        return inteldiv;
    }

    void setIntelDiv(IntelDivision *i)
    {
        inteldiv = i;
    }
};
#endif