#include "War.h"
#include "IntelDivision.h"
#include "Records.h"
#include "State.h"
#include <iostream>
using namespace std;

int main()
{
    War *w = new War("Ella", 20);
    cout << "Before backup" << endl;
    cout << w->toString() << endl;
    w->makeBackup();
    w->setScore(50);
    cout << "changing" << endl;
    cout << w->toString() << endl;
    w->restore();
    cout << "restoring" << endl;
    cout << w->toString() << endl;
    cout << "hello world" << endl;
}