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
    User(string n, int s);

    User(User &user);

    string getUserName();

    int getUserScore();

    string getUserDetails();

    void setUserScore(int s);
};
#endif