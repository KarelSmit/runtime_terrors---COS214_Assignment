#include "War.h"
#include "Records.h"
#include <iostream>
using namespace std;

int main()
{
    War *originator = new War("Adolf", 200);
    Records *caretaker = new Records(originator);

    caretaker->showTopThree();

    caretaker->Backup();
    originator->setScore(300);
    caretaker->Backup();
    originator->setScore(8);+
    caretaker->Backup();
    originator->setScore(8);
    cout << "\n";
    caretaker->ShowHistory();
    cout << "\nClient: Now, let's rollback!\n\n";
    caretaker->Undo();
    cout << "\nClient: Once more!\n\n";
    caretaker->Undo();
    cout << endl;

    caretaker->showTopThree();

    return 0;
}