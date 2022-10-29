#ifndef RECORDS_H
#define RECORDS_H
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
        return 
    }

    void setIntelDiv(IntelDiv *i)
    {
        inteldiv = i;
    }
};
#endif