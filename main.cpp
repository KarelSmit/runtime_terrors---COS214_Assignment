#include "TankUnit.cpp"
#include "InfantryUnit.cpp"
#include "SupplyUnit.cpp"
#include "MedicUnit.cpp"
#include "FootUnit.cpp"
#include "Battalion.cpp"
#include "CombatBarracks.cpp"
#include "Barracks.cpp"
#include "TankDriver.cpp"
#include "TransportUnit.cpp"
#include "TankFactory.cpp"
#include "VehicleFactory.cpp"
#include "Vehicle.cpp"
#include "SupportBarracks.cpp"
#include "SupplyTruckFactory.cpp"
#include "SupplyTruck.cpp"
#include <iostream>

using namespace std;

int main()
{
	Battalion* m = new MedicUnit();
	cout << "MedicUnit HP = " << m->getHP() << endl;
	cout << "MedicUnit RP = " << m->getRP() << endl;
	cout << "MedicUnit Dmg = " << m->getDmg() << endl;
	delete m;
	return 0;
}
