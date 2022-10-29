#ifndef WAR_H
#define WAR_H
#include <iostream>
using namespace std;

class War
{
private:
    State *state;
    string name;
    int score;

public:
    State *getState()
    {
        return state;
    }

    Directory *getRoot()
    {
        return root;
    }

    Memento *makeBackup()
    {
        Directory *backup = new Directory(*root);
        return new Memento(backup, state);
    }

    void restore(Memento *mem)
    {
        root = mem->getRoot();
        state = mem->getState();
    }
};
#endif