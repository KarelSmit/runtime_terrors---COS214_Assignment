#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

//State
class State
{
private:
    bool userChanged;    

public:
    State() : userChanged(false) {}

    State(const State &s) : userChanged(s.userChanged) {}

    void setUserChanged()
    {
        userChanged = true;
    }

    void showState()
    {
        if (userChanged)
        {
            cout << "User has changed" << endl;
        }
        else
        {
            cout << "Nothing has changed" << endl;
        }
    }
};
#endif