#include "IntelDivision.h"

IntelDivision::IntelDivision(User *u) : user(u)
{
	this->user = new User(*u);
	time_t now = time(0);
	this->date_ = ctime(&now);
}

User *IntelDivision::getUser()
{
	return this->user;
}

string IntelDivision::GetName() const
{
	return this->date_ + " / (" + this->user->getUserDetails() + ")";
}

string IntelDivision::getDetails()
{
	return user->getUserName() + ";" + to_string(user->getUserScore());
}

string IntelDivision::print()
{
	return user->getUserName() + " achieved " + to_string(user->getUserScore());
}

string IntelDivision::date() const
{
	return this->date_;
}