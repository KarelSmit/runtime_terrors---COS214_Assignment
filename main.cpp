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
#include "Records.cpp"
#include "User.cpp"
#include "IntelDivision.cpp"
#include <iostream>
#include <stdlib.h>
#include "asciiArt.cpp"

// #include 


using namespace std;

int main()
{
	asciiArt aA;
    Color::Modifier red(Color::FG_RED);
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier blue(Color::FG_BLUE);
    Color::Modifier yellow(Color::FG_YELLOW);
    Color::Modifier magenta(Color::FG_MAGENTA);
    Color::Modifier cyan(Color::FG_CYAN);
    Color::Modifier def(Color::FG_DEFAULT);
	system("clear");


	//MEMENTO
	War *warSim = War::startWar();
	Records *caretaker = new Records(warSim);

	while (true)
	{

		// cout<< yellow;
		// cout << "=======================================================================================================================================================\n";
		// cout <<	green;	
		// cout << "	 __          __           _      _           __  __          __             _____  _                    _         _    _               		\n";
		// cout << "	 \\ \\        / /          | |    | |         / _| \\ \\        / /            / ____|(_)                  | |       | |  (_)              		\n";
		// cout << "	  \\ \\  /\\  / /___   _ __ | |  __| |   ___  | |_   \\ \\  /\\  / /__ _  _ __  | (___   _  _ __ ___   _   _ | |  __ _ | |_  _   ___   _ __  		\n";
		// cout << "	   \\ \\/  \\/ // _ \\ | '__|| | / _` |  / _ \\ |  _|   \\ \\/  \\/ // _` || '__|  \\___ \\ | || '_ ` _ \\ | | | || | / _` || __|| | / _ \\ | '_ \\ 		\n";
		// cout << "	    \\  /\\  /| (_) || |   | || (_| | | (_) || |      \\  /\\  /| (_| || |     ____) || || | | | | || |_| || || (_| || |_ | || (_) || | | |		\n";
		// cout << "	     \\/  \\/  \\___/ |_|   |_| \\__,_|  \\___/ |_|       \\/  \\/  \\__,_||_|    |_____/ |_||_| |_| |_| \\__,_||_| \\__,_| \\__||_| \\___/ |_| |_|		\n";	
		// cout<< yellow;
		// cout << "=======================================================================================================================================================\n";
		// cout<< def;

		aA.printBanner();

		// cout << "                           .////////                                          	 	\n";
		// cout << "                    ///////////////////                                        	\n";
		// cout << "                    //////////////////////// .................... ///////////				" << yellow << "/////\n" << def;
		// cout << "                    //////////////////////// //////////////////// ///////////   			" << yellow << "/////\n" << def;
		// cout << "                    ////////////////////////                                    	\n";
		// cout << "                    //////////////////////,       .*////                        	\n";
		// cout << "                .*//////////////////////,      ./####### ,                      	\n";
		// cout << "         //////  ######,    *((((((((((((((((((((.// ( # //                     	\n";
		// cout << "      /// ## ((((( //  ((((( //,// ((( / ##. /  ,,*/  # ///                    	\n";
		// cout << "      // ##(   ( / ####%  ( / ##### /  /%##### / (((( #,                        	\n";
		// cout << "    .//.## *##    ###### /  / ##### / ,/ ##### *(((( ##                         	\n";
		// cout << "        (# *   (( / %#( / ((* /, // ((((/ /// ((((((#.                          	\n";
		// cout << "           ####(     .*/(((((/*,      /###########   								\n";

		cout << endl;		

		cout << "Welcome to the World of War simulation.\n\nSelect an option below:\n\n";
		int choice;
		cout << "1. Start simulation" << endl;
		cout << "2. Show top 3 highscores" << endl;
		cout << "3. Show all previous scores" << endl;
		cout << "4. Help" << endl;
		cout << "5. Exit" << endl;
		cout << "->";
		cin >> choice;
		cout << "================================================================================================\n";
		if (choice == 1)
		{	
			cout << cyan << "Running simulation" << def <<endl;
			warSim->simulate();
			caretaker->Backup();
		}
		else if (choice == 2)
		{
			cout << cyan << "Top 3 Scores" << def <<endl;
			caretaker->showTopThree();
		}
		else if (choice == 3)
		{
			cout << cyan << "Simulation History" << def <<endl;
			caretaker->ShowHistory();
		}
		else if (choice == 4)
		{
			cout << cyan << "Help Information" << def <<endl<<endl;
			cout << "\n>Welcome to the help menu for the World of War simulation.\n>To start the simulation, select option (1) in the main menu.\n";
			cout << ">Once the simulation initiates, enter your name. (This will be used to save your score)\n";
			cout << ">After you enter your name, you will be presented with a 5 army combinations.\n>Your army has 4 important values: HP, Damage, RejuvenationPower and ExtraMoves\n\n";
			cout << ">HP is the total health of your army. This also counts as your score at the end of each battle, so remember to keep your HP high!\n";
			cout << ">Damage determines the amount of HP your enemy will lose every time you attack.\n";
			cout << ">RejuvenationPower is the amount of HP that your army recovers when your defend.\n";
			cout << ">ExtraMoves determines how many moves you are able to make at the end of the battle, once your enemy has exhausted their total moves.\n";
			cout << ">These values are affected by your choice of battalions.\n>The army combinations consist of 4 different battalion types:\n";
			cout << ">Infantry - Infantry battalions grant your army with both Damage and HP.\n";
			cout << ">Tank - Tank battalions grant your army with both Damage and HP.\n";
			cout << ">Medic - Medic battalions grant your army with RejuvenationPower as well as HP.\n";
			cout << ">Supply - Supply battalions increases the army HP, and also grants you 1 extra move per supply battalion.\n";
			cout << "\n>Once you have selected your battalion combination, the battle will start.\n";
			cout << ">During the battle, you and your opponent will take turns to either Attack or Defend.\n";
			cout << ">Choosing to Attack deals Damage to your opponent's HP, the amount of which is determined by your army TotalDamage.\n";
			cout << ">Choosing to Defend will allow your army to heal and recover HP. The amount of which is determined by the RejuvenationPower of your army.\n";
			cout << "\n>During the simulation, you will fight 3 battles against your opponent.\n>Once all 3 battles are over, whoever has won the most battles of the 3 will win the war.\n";
		}
		else if (choice == 5)
		{
			break;
		}
		else
		{
			cout << "Invalid input. Please choose one of the provided options.\n";
		}
		cout<< green << "Press Enter to Continue" <<endl;
		cin.ignore(1,'\n');
		cin.get();
		system("clear");
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
	cout << "\nClient: Now, let"s rollback!\n\n";
	caretaker->Undo();
	cout << "\nClient: Once more!\n\n";
	caretaker->Undo();
	cout << endl;
	caretaker->showTopThree();*/
	return 0;
}