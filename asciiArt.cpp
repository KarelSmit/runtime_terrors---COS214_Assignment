#include "asciiArt.h"
#include "colormod.h"

asciiArt::asciiArt(){

}

asciiArt::~asciiArt(){

}

void asciiArt::printBanner(){
    Color::Modifier red(Color::FG_RED);
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier blue(Color::FG_BLUE);
    Color::Modifier yellow(Color::FG_YELLOW);
    Color::Modifier magenta(Color::FG_MAGENTA);
    Color::Modifier cyan(Color::FG_CYAN);
    Color::Modifier def(Color::FG_DEFAULT);
    cout<< yellow;
    cout << "=======================================================================================================================================================\n";
    cout <<	green;	
    cout << "	 __          __           _      _           __  __          __             _____  _                    _         _    _               		\n";
    cout << "	 \\ \\        / /          | |    | |         / _| \\ \\        / /            / ____|(_)                  | |       | |  (_)              		\n";
    cout << "	  \\ \\  /\\  / /___   _ __ | |  __| |   ___  | |_   \\ \\  /\\  / /__ _  _ __  | (___   _  _ __ ___   _   _ | |  __ _ | |_  _   ___   _ __  		\n";
    cout << "	   \\ \\/  \\/ // _ \\ | '__|| | / _` |  / _ \\ |  _|   \\ \\/  \\/ // _` || '__|  \\___ \\ | || '_ ` _ \\ | | | || | / _` || __|| | / _ \\ | '_ \\ 		\n";
    cout << "	    \\  /\\  /| (_) || |   | || (_| | | (_) || |      \\  /\\  /| (_| || |     ____) || || | | | | || |_| || || (_| || |_ | || (_) || | | |		\n";
    cout << "	     \\/  \\/  \\___/ |_|   |_| \\__,_|  \\___/ |_|       \\/  \\/  \\__,_||_|    |_____/ |_||_| |_| |_| \\__,_||_| \\__,_| \\__||_| \\___/ |_| |_|		\n";	
    cout<< yellow;
    cout << "=======================================================================================================================================================\n";
    cout<< def;
}

void asciiArt::printBar(int points){
    points = points/10;
    // cout << points<<endl;
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);
    cout<< red<< "\t";
    for (int i = 0; i<points;i++){
        cout<<"*";
    }
    cout << def << endl;
}