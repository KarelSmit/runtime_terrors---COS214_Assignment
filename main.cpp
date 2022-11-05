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
#include "SpecialSkill.cpp"
#include "Sniper.cpp"
#include "Stealth.cpp"
#include "Records.h"
#include <iostream>

using namespace std;

int main()
{
	War *warSim = War::startWar();
    Records* caretaker = new Records(warSim);

	cout << "Welcome to World of War\n";
	while (true)
	{
		int choice;
		cout << "1. Start simulation" << endl;
        cout << "2. Show top 3 scores"  << endl;
        cout << "3. Show all scores"  << endl;
		cout << "4. Help" << endl;
		cout << "5. Exit" << endl;
		cout << "->";
		cin >> choice;
		if ( choice == 1 ){
			warSim->simulate();
			//store
		}
        else if (choice == 2)
        {
            caretaker->showTopThree();
        }
        else if (choice == 3)
        {
            caretaker->ShowHistory();
        }
        else if (choice == 4 )
		{
			cout << ""; //Add description of simulation and battalions, etc.
		}
        else if ( choice == 5 ){
			break;
		}
        else{
			cout << "Invalid input. Please choose one of the provided options.\n";
		}
	}
	/* War *originator = new War("Super-Duper", 10);
    Records *caretaker = new Records(originator);

    caretaker->showTopThree();

    caretaker->Backup();
    originator->setScore(300);
    caretaker->Backup();
    originator->setScore(8);+
    caretaker->Backup();
    originator->setScore(8);
    cout << "\n";
    caretaker->ShowHistory();
    cout << "\nClient: Now, let's rollback!\n\n";
    caretaker->Undo();
    cout << "\nClient: Once more!\n\n";
    caretaker->Undo();
    cout << endl;
    caretaker->showTopThree();*/
	return 0;
}