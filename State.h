#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

//State
class State
{
private:
    bool rootChanged;   

public:
    State() : rootChanged(false) {}

    State(const State &s) : rootChanged(s.rootChanged) {}

    void setRootChanged()
    {
        rootChanged = true;
    }

    void showState()
    {
        if (rootChanged)
        {
            cout << "***Root has changed" << endl;
        }
        else
        {
            cout << "Nothing has changed" << endl;
        }
    }
};
#endif