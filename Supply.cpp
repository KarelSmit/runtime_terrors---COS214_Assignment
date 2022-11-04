#include "Supply.h"
#include "SupplyTruckFactory.h"
#include <string>
Supply::Supply(int HP, string name) : TransportUnit(HP)
{
	SupplyTruckFactory *newVehicle = new SupplyTruckFactory();
	supplyTruck = newVehicle->createVehicles();
}

Supply::~Supply()
{
	supplyTruck->~Vehicle();
}

Vehicle *getSupplyTruck()
{
	return this->supplyTruck;
}

void Supply::print()
{
	cout << name << "(" << HP << ")" << endl;
}

Supply &Supply::operator=(const Supply &m)
{
	this->name = m.name;
	this->HP = m.HP;
	return *this;
}
bool Supply::operator==(const Supply &m)
{
	if ((this->name == m.name) && this->HP == m.HP)
		return true;
	else
		return false;
}

std::ostream &operator<<(std::ostream &out, const Medic &m)
{
	out << m.name << "(" << m.HP << ")";
	return out;
}