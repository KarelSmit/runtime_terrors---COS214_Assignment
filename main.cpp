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
#include "War.cpp"
#include "Country.cpp"
#include "Army.cpp"
#include "General.cpp"
#include "Strategy.cpp"
#include "Attack.cpp"
#include "Defend.cpp"
#include <iostream>

using namespace std;

int main()
{
	War *warSim = War::startWar();
	cout << "Welcome to World of War\n";
	while (true)
	{
		int choice;
		cout << "1. Start simulation\n";
		cout << "2. Help\n";
		cout << "3. Exit\n";
		cout << "->";
		cin >> choice;
		if ( choice == 1 ){
			warSim->simulate();
		}else if (choice == 2 )
		{
			cout << ""; //Add description of simulation and battalions, etc.
		}else if ( choice == 3 ){
			break;
		}else{
			cout << "Invalid input. Please choose one of the provided options.\n";
		}
	};
	return 0;
}
