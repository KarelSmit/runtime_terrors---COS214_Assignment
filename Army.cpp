#include "Army.h"

Army::Army(){
	totalDmg = 0;
	totalHP - 0;
	extraMoves = 0;
}

Army::~Army(){
	//delete the linked list
}

void Army::addInfantry(int x){

}

void Army::addTank(int x){

}

void Army::addMedic(int x){

}

void Army::addSupply(int x){

}

void Army::updateStats(){

}

int Army::getDamage(){
	return totalDmg;
}

void Army::takeDamage(int x){

}

void Army::heal(){

}

void Army::reset(){
	totalDmg = 0;
	totalHP - 0;
	extraMoves = 0;
}