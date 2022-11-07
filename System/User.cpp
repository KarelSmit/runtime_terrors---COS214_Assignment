#include "User.h"

User::User(string n, int s)
{
	name = n;
	score = s;
}

User::User(User &user)
{
	name = user.name;
	score = user.score;
}

string User::getUserName()
{
	return name;
}

int User::getUserScore()
{
	return score;
}

string User::getUserDetails()
{
	return getUserName() + ": " + to_string(getUserScore());
}

void User::setUserScore(int s)
{
	score = s;
}