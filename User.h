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

    User(User &user)
    {
        name = user.name;
        score = user.score;
    }

    string getUserName()
    {
        return name;
    }

    int getUserScore()
    {
        return score;
    }

    string getUserDetails()
    {
        return getUserName() + ": " + to_string(getUserScore());
    }

    void setUserScore(int s)
    {
        score = s;
    }
};
#endif