#include "War.cpp"
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
	}

	return 0;
}
