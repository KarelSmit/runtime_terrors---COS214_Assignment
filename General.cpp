#include "General.h"
#include <iostream>

General::General(){
	std::cout << "Enter your name:";
	std::cin >> name;
}

General::General(std::string nme){
	name = nme;
}

General::~General(){}