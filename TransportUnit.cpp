#include "TransportUnit.h"
#include <string>

TransportUnit::TransportUnit(int HP)
{
	this->HP = HP;
}

TransportUnit::~TransportUnit()
{
	delete transport;
}

int TransportUnit::getHP()
{
	return this->HP;
}

string TransportUnit::getName()
{
	return this->name;
}