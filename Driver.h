#ifndef DRIVER_H
#define DRIVER_H
#include "War.h"
#include "IntelDivision.h"
using namespace std;

class Driver{
private:
    IntelDivision *div;
    War *war;

public:
    Driver(string n, int s)
    {
        war = new War(n,s);  
    }

    void setScore(int s)
    {
        war->setScore(s);
    }

    void save()
    {
        div = war->makeBackup();
    }

    void undo()
    {
        war->restore(div);
    }

    void giveScore()
    {
        cout << war->getScore() << endl;
    }
};
#endif