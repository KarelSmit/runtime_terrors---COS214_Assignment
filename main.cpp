#include "War.h"
#include "IntelDivision.h"
#include "Records.h"
#include "State.h"
#include "Driver.h"
#include <iostream>
using namespace std;

int main()
{
    Driver *d = new Driver("Ella",20);
    d->giveScore();
    d->save();
    d->setScore(50);
    d->giveScore();
    d->undo();
    d->giveScore();
    return 0;
}