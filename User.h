#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User 
{
private:
    string name;
    int score;

public:
    User(string n, int s)
    {
        name = n;
        score = s;
    }

    User(const User &u)
    {
        name = u.name;
        score = u.score;
    }

    string getName()
    {
        return name;
    }

    int getScore()
    {
        return score;
    }

    void setScore(int i)
    {
        score = i;
    }

    string toString()
    {
        string output = name + " -> " + to_string(score);
        return output;
    }
};
#endif